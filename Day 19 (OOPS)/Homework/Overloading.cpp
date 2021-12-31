#include<iostream>
using namespace std;

class Test{
    public:
        void fun(int a){
            cout << "Integer Function.\n";
        }

        void fun(double a){
            cout << "Double Function.\n";
        }

        void fun(float a){
            cout << "Floating Function.\n";
        }
};

int main(){
    Test t;
    t.fun(1);
    t.fun(1.0);
    t.fun(1.0f);
    return 0;
}