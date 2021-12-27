#include<iostream>
using namespace std;

template<class T>
class CircularQueue{
    private:
        T *arr;
        int size;
        int front;
        int rear;

        int update(int inp){
            return (inp + 1) % size;
        }

    public:
        CircularQueue(int size){
            this->size = size;
            arr = new T[size];
            front = rear = -1;
        }  	 

        void enque(T data){
            if(update(rear) == front){
                cout << "Sorry, Queue is full.\n";
                return;
            }

            if(front == -1){
                // formerly empty queue
                front = 0; 
            }

            rear = update(rear);
            arr[rear] = data;
        }

        T deque(){
            if(front == -1){
                cout << "Sorry, Nothing to remove.\n";
                return T(NULL);
            }

            T data = arr[front];
            front = update(front);

            if((front > rear) || (update(rear) == 0 && front == 0)){
                // just deleted rear
                front = rear = -1;
            }

            return data;
        }

        void display(){
            if(rear == -1){
                cout << "Sorry, Nothing to display.";
                cout << "\n==================================================================\n"; 
                return;
            }

            int iter = front;

            while (iter != rear){
                cout << arr[iter] << '\t';
                iter = update(iter);
            }

            cout << arr[iter];

            cout << "\n==================================================================\n";
        }
};

int main(){
    CircularQueue<double> cq(10);

    cq.display();

    for(double i = 0.5; i <= 10.5; i += 0.5){
        cout << "Trying: " << i << '\n';
        cq.enque(i);
        cout << "\n==================================================================\n";
    }

    cq.display();

    for (double i = 0.5; i <= 10.5; i += 0.5){
        cout << "Deleted: " << cq.deque() << '\n';
        cq.display();
    }

    cq.display();

    for (double i = 0.5; i <= 10.5; i += 0.5)
    {
        cout << "Trying: " << i << '\n';
        cq.enque(i);
        cout << "\n==================================================================\n";
    }

    cq.display();

    for (double i = 0.5; i <= 10.5; i += 0.5)
    {
        cout << "Deleted: " << cq.deque() << '\n';
        cq.display();
    }
    return 0;
}   