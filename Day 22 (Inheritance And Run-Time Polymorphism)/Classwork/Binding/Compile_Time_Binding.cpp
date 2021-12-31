#include<iostream>
using namespace std;

class A{
    public:
        void hi(){
            cout << "Hello from A.\n";
        }
};

class B: public A{
    public:
        void hi(){
            cout << "Hello from B.\n";
        }
};

int main(){
    A* obj = new B();
    obj -> hi();
    // compile time binding as hi() did not get overridden by child pointer.

    return 0;
}