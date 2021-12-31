#include<iostream>
using namespace std;

class Human{
    public:
        int legs;
        int height;
        int hands;

        void introHuman(){
            cout << "Hello, I am a human.\n";
        }
};

class Boy: public Human{
    public:
        int age;

        void introBoy(){
            cout << "Hello, I am a boy.\n";
        }
};

int main(){
    Human h;
    Boy b;

    cout << sizeof(h) << '\n';
    cout << sizeof(b) << '\n';

    b.hands = 6;
    cout << b.hands << '\n';

    b.introHuman();
    b.introBoy();

    return 0;
}