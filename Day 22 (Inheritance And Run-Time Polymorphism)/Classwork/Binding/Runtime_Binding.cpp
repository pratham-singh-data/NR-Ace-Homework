#include<iostream>
using namespace std;

class A{
    public:
        virtual void hi(){
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
    // runtime binding as hi() gets overridden by child pointer due to virtual keyword.

    return 0;
}