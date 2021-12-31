#include<bits/stdc++.h>
using namespace std;

template<class T>
class Queue{
    private:
        T *arr;
        int front;
        int rear;
        int size;

    public:
        Queue(int size){
            arr = new T[size];
            front = rear = -1;
            this->size = size;
        }

        void enque(T data){
            if(rear + 1 == size){
                cout << "Sorry, Queue is full.\n";
                return;
            }

            arr[++rear] = data;
        }

        T deque(){
            if(front == rear){
                cout << "Nothing to deque.\n";
                return T(NULL);
            }

            T deleted = arr[++front];

            if(front == rear){
                front = rear = -1;
            }

            return deleted;
        }

        void display(){
            if(rear == -1){
                cout << "Nothing to display.";
            }

            for(int i = front + 1; i <= rear; i++){
                cout << arr[i] << '\t';
            }
            cout << "\n========================================================================\n";
        }
};

int main(){
    Queue<double> q(10);

    q.display();

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