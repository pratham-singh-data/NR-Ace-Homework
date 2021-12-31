#include<iostream>
using namespace std;

template<class T>
class Stack{
    private:
        T* arr;
        int size;
        int top;

        void line(){
            cout << "\n==============================================================================\n";
        }

    public:
        Stack(int size){
            this->size = size;
            top = -1;
            arr = new T[size];
        }

        void push(T data){
            if(top == size - 1){
                cout << "Sorry, we\'re full.\n";
                return;
            }
            arr[++top] = data;
        }

        T pop(){
            if(top == -1){
                cout << "Sorry, Nothing to remove.\n";
                return T(NULL);
            }
            return arr[top--];
        }

        void display(){
            for(int i = top; i >= 0; i--){
                cout << arr[i] << ' ';
            }
            line();
        }
};

int main(){
    Stack<double> s(10);

    for(double i = 0.5; i <= 10.5; i += 0.5){
        s.push(i);
        s.display();
    }

    for (double i = 0.5; i <= 10.5; i += 0.5){
        cout << "Deleted: " << s.pop() << '\n';
        s.display();
    }
}