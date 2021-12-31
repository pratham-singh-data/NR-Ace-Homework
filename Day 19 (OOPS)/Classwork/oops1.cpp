#include<iostream>
using namespace std;

class Human{
    public:
        // properties
        int legs;
        int ears;
        int hands;
        int heights;

        // behaviour
        void sleep(){
            cout << "I am sleeping\n";
        }

        void eat(){
            cout << "I am eating\n";
        }

        void play(){
            cout << "I am playing\n";
        }
};

int main(){
    // create an object
    Human simran;

    // access a method
    simran.play();
    simran.eat();
    simran.sleep();

    // access a parameter
    simran.legs = 8;
    cout << simran.legs << '\n';
    simran.heights = 456;
    cout << simran.heights << '\n';

    // check size of the object
    cout << sizeof(simran) << '\n';

    return 0;
}