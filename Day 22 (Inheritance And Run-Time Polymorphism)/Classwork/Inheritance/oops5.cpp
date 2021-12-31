#include<iostream>
using namespace std;

class A{
    private:
        int a;
    
    protected:
        int b;

    public:
        int c;
};

class B: protected A{
    private:
        int x;
    
    protected:
        int y;

    public:
        int z;
};

int main(){
    A a;
    B b;

    cout << sizeof(a) << "  " << sizeof(b) << '\n';
    // Answer: 12 24
    // even if private values are inaccessible they are a part of B as it is a is-a relationship.
    // so size is still size of all values.

    return 0;
}