#include<iostream>
using namespace std;

template<class T>
class Queue{
    private:
        T* arr;
        int front;
        int rear;
        int size;
        // we will not learn about the cyclic queue as we will nust use the linked list optimised version
    
    public:
        Queue(int size){
            this->size = size;
            arr = new T[size];
            front = rear = -1;
        }

        void enqueue(T data){
            if(rear == size - 1){
                cout << "Sorry, Queue is full\n";
                return;
            }

            arr[++rear] = data;
        }

        T dequeue(){
            if(front == rear){
                cout << "Sorry, Nothing to remove\n";
                return T(NULL);
            }

            return arr[++front];
        }

        void display(){
            if(front == rear){
                cout << "Sorry, Nothing to display.\n";
                cout << "\n================================================================================\n";
                return;
            }

            for(int i = front + 1; i <= rear; i++){
                cout << arr[i] << '\t';
            }
            cout << "\n================================================================================\n";
        }
};

int main(){
    Queue<double> q(10);

    q.display();

    for(double i = 0.5; i <= 10.5; i += 0.5){
        q.enqueue(i);
    }
    q.display();

    for(double i = 0.5; i <= 10.5; i += 0.5){
        cout << "Deleted: " << q.dequeue() << '\n';
        q.display();
    }

    return 0;
}