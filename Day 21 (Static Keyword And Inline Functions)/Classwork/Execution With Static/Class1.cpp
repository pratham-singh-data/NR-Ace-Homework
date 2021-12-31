#include<iostream>
using namespace std;

class GFG{
    public:
        static int a;

        GFG(){
            //nothing
        }
};

int GFG :: a = 23;

int main(){
    GFG obj1;
    GFG obj2;
    obj1.a = 2;
    obj2.a = 3;

    cout << obj1.a << ' ' << obj2.a << '\n';

    return 0;
}