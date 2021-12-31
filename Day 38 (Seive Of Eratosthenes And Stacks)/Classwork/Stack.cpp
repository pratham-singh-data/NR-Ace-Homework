#include<iostream>
using namespace std;

template<class T>
class Stack{
    private:
        T* arr;
        int size;
        int top;

        void line(){
            cout << "\n======================================================================\n";
        }

    public:

        Stack(int size){
            this->size = size;
            top = -1;
            arr = new T[size];
        }

        void display(){
            if(top == -1){
                cout << "Nothing to see here...";
                line();
                return;
            }

            for(int i = top; i >= 0; i--){
                cout << arr[i] << '\t';
            }
            line();
        }

        void push(T data){
            if(top ==  size - 1){
                cout << "Sorry, we\'re full...\n";
                return;
            }
            arr[++top] = data;
        }

        T pop(){
            if(top == -1){
                return T(NULL);
            }

            return arr[top--];
        }
};

int main(){
    Stack<double> s(10);

    s.display();
    cout << "Insertion in progress...\n";

    for(double i = 0.5; i < 10.5; i += 0.5){
        cout << "Trying: " << i << '\n';
        s.push(i);
        s.display();
    }

    cout << "\n\n\nDeletion in progress...\n";

    for (double i = 0.5; i < 20.5; i += 0.5){
        cout << "Deleted: " << s.pop() << '\n';
        s.display();
    }

    cout << "\n\n\nInsertion in progress...\n";

    for(double i = 0.5; i < 10.5; i += 0.5){
        cout << "Trying: " << i << '\n';
        s.push(i);
        s.display();
    }

    return 0;
}