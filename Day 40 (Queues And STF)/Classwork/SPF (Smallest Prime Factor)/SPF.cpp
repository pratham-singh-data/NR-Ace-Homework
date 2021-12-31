#include<iostream>
#define NUMS 100000
using namespace std;

int main(){
    int spf[NUMS];

    // preprocessing
    for(int i = 0; i < NUMS; i++){
        spf[i] = i;
    }

    // create SPF seive
    for(int i = 2; i < NUMS; i++){
        if(spf[i] == i){ // current is a prime
            for(int j = 2 * i; j < NUMS; j += i){
                if(spf[j] > i){
                    spf[j] = i;
                }   
            }
        }
    }

    // get smallest prime factors of the first 100 numbers
    for(int i = 0; i < 100; i++){
        cout << i << '\t' << spf[i] << '\n';
    }
    cout << '\n';
}