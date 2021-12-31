#include<iostream>
using namespace std;

class Person{
    public:
        void sleep(){
            cout << "I am sleeping\n";
        }

        void eat(){
            cout << "I am eating\n";
        }

        void getter(){
            cout << pin << "\n";
        }

        void setter(int a){
            pin = a;
        }

    private:
        int pin = 0;

        void angry(){
            cout << "I am angru\n";
        }
};

int main(){
    Person p;
    p.eat();
    p.sleep();
    p.getter();
    p.setter(90);
    p.getter();
}