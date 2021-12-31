#include<iostream>
using namespace std;

class Human{
    static int eyes;
    static int hands;

    int number;
};

int main(){
    Human h;
    cout << sizeof(h);
    return 0;
}