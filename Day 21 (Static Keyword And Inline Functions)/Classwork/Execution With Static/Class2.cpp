#include<iostream>
using namespace std;

class Human{
    private:
        const static int eyes = 2;
    public:
        string name;

        static int me(){
            cout << "I have " << eyes << " eyes.\n";
        }

        void hi(){
            cout << "Hello from " << name << '\n';
            me();
        }
};

int main(){
    Human jeenesh, nishant, abhishek;
    jeenesh.name = "Jeenesh";

    jeenesh.hi();
    cout << "========================================================\n";
    Human::me();
    return 0;
}