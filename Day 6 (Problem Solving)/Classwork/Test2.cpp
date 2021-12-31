#include<iostream>
using namespace std;

// how will this progress
// 1 3 4 terminate

int main(){
    int i = 1;

    while(i < 20){
        cout << i << '\t';

        if(i % 2 == 0){
            break;
        }
        else{
            i += 2;
        }

        i++;
    }

    return 0;
}