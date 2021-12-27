#include<iostream>
# define NUMS 100000
using namespace std;

int main(){
    int *arr = new int[NUMS];

    // prefill the seive
    for(int i = 0; i < NUMS; i++){
        arr[i] = i;
    }

    // fill seive
    for(int i = 2; i < NUMS; i++){
        if(arr[i] == i){ // currently at a prime
            for(int j = 2 * i; j < NUMS; j += i){
                if(arr[j] > i){
                    arr[j] = i;
                }
            }
        }
    }

    // print seive upto first 500 values
    for(int i = 0; i < 500; i++){
        cout << '(' << i << ',' << arr[i] << ")\n";
    }

    return 0;
}