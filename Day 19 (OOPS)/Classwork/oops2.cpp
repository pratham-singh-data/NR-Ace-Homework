#include<iostream>
using namespace std;

class Sum{
    public:
        int sum(int a, int b){
            return a + b;
        }

        string sum(string a, string b){
            return a + b;
        }

        float sum(float a, float b){
            return a + b;
        }
};

int main(){
    Sum s;

    cout << s.sum(2, 3) << '\n';
    cout << s.sum(2.2f, 3.3f) << '\n';  
    // f needs to be mentioned as otherwise system will assume fractional value is double
    cout << s.sum("2", "3") << '\n';
    // char cannot be used in string as otherwise system will convert it to its corresponding ASCII values.
    // and pass as (int, int)

    // note float and double will be typecase to int if no corresponding method is available
    // it looks for the most suitable method, error is returned only if no suiable function is present
    return 0;
}