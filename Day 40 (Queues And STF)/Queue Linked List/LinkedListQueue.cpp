#include<iostream>
using namespace std;

template<class T>
class Node{
    public:
        T data;
        Node<T>* next;

        Node(T data){
            this->data = data;
            next = NULL;
        }
};

template<class T>
class Queue{
    private:
        Node<T> *front;
        Node<T> *rear;

    public:
        Queue(){
            front = rear = NULL;
        }

        void enque(T data){
            Node<T>* temp = new Node<T>(data);

            if(rear == NULL){
                // empty queue
                front = rear = temp;
            }

            rear->next = temp;
            rear = rear->next;
        }

        T deque(){
            if(front == NULL){
                // empty queue
                cout << "Sorry, Nothing to delete\n";
                return T(NULL);
            }

            Node<T>* temp = front;
            front = front->next;
            T data = temp->data;
            delete temp;

            if(front == NULL){
                // just deleted rear
                rear = NULL;
            }

            return data;
        }

        void display(){
            Node<T>* iter = front;

            if(rear == NULL){
                cout << "Sorry, Nothing to display";
                cout << "\n=============================================================================\n";
                return;
            }

            while(iter != NULL){
                cout << iter->data << '\t';
                iter = iter->next;
            }
            cout << "\n==========================================================================\n";
        }
};

int main(){
    Queue<double> q;

    q.display();
    for(double i = 0.5; i <= 10.5; i += 0.5){
        q.enque(i);
    }
    q.display();

    for (double i = 0.5; i <= 10.5; i += 0.5){
        cout << "Deleted:" << q.deque() << '\n';
        q.display();
    }

    q.display();
    for (double i = 0.5; i <= 10.5; i += 0.5)
    {
        q.enque(i);
    }
    q.display();

    for (double i = 0.5; i <= 10.5; i += 0.5)
    {
        cout << "Deleted:" << q.deque() << '\n';
        q.display();
    }

    return 0;
}