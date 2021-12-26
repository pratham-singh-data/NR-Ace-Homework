#include<bits/stdc++.h>
#define NUMS 1000000
using namespace std;

int main(){
    int* arr = new int[NUMS];
    memset(arr, -1, sizeof(int) * NUMS);

    arr[0] = arr[1] = 0;

    for(int i = 2; i < NUMS; i++){
        if(arr[i] == -1){
            for(int j = 2 * i; j < NUMS; j += i){
                arr[j] = 0;
            }
        }
    }

    // print first 100 prime numbers
    for(int i = 0, tot = 0; tot < 100 && i < NUMS; i++){
        if(arr[i] == -1){
            cout << i << ' ';
            tot++;
        }
    }

    return 0;
}