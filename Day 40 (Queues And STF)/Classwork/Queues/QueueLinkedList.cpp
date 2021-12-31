#include<iostream>
using namespace std;

template<class T>
class Node{
    public:
        T data;
        Node<T>* next;

        Node(T data){
            this->data = data;
            this->next = NULL;
        }
};

template<class T>
class Queue{
    private:
        Node<T>* front;
        Node<T>* rear;
        int size;

    public:
        Queue(){
            front = rear = NULL;
        }

        void enque(T data){
            Node<T>* temp = new Node<T>(data);

            if(rear == NULL){
                // empty list
                front = rear = temp;
                return;
            }

            // all cases with at least one element
            rear->next = temp;
            rear = temp;
        }

        T deque(){
            if(front == NULL){
                // empty list
                cout << "Sorry, No element to deque";
                return T(NULL);
            }

            // queue with at least one element
            Node<T> *temp = front;
            front = front->next;
            T deleted = temp->data;
            delete temp;

            if(front == NULL){
                // if queue is now empty
                rear = NULL;
            }

            return deleted;
        }

        void display(){
            Node<T>* iter = front;

            while(iter != NULL){
                cout << iter->data << '\t';
                iter = iter->next;
            }

            cout << "\n===============================================================\n";
        }
};

int main(){
    Queue<double> q;

    for(double i = 0.5; i <= 10.5; i += 0.5){
        q.enque(i);
    }
    q.display();

    for (double i = 0.5; i <= 10.5; i += 0.5){
        cout << "Deleted: " << q.deque() << '\n';
        q.display();
    }

    for (double i = 0.5; i <= 10.5; i += 0.5)
    {
        q.enque(i);
    }
    q.display();

    for (double i = 0.5; i <= 10.5; i += 0.5)
    {
        cout << "Deleted: " << q.deque() << '\n';
        q.display();
    }

    return 0;
}