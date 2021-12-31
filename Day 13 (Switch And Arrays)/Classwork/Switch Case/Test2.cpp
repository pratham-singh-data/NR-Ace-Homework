#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    switch(n){
        case 0:{
            cout << "hi\n";
        }
        case 1:{
            cout << "hello\n";
            break;
        }
        case 2: {
            cout << "bye\n";
        }
        case 3:{
            cout << "how are you\n";
        }
        case 4:{
            cout << "bye bye\n";
            break;
        }
        default:{
            cout << "nhi bataunga\n";
        }
    }

    // output for n = 2;
    // fall through occurs 0 to 1 and 3 to 4.
}