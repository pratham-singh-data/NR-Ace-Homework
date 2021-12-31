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
        virtual void hi(){
            cout << "Hello from B.\n";
        }
};

class C: public B{
    public:
        void hi(){
            cout << "Hello from C.\n";
        }
};

class D: public C{
    public:
        void hello(){
            cout << "Hello from D.\n";
        }
};

int main(){
    A* obj = new D();
    obj -> hi();

    return 0;
}