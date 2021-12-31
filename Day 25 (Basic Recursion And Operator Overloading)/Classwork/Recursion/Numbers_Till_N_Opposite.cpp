#include<iostream>
using namespace std;

void print_opposite(int n){
    if(n == -1){
        return;
    }

    cout << n << '\t';
    print_opposite(n - 1);
}

int main(){
    int n;
    cout << "Enter number till which values are to be printed: ";
    cin >> n;

    print_opposite(n);
    return 0;
}