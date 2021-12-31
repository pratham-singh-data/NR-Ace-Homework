#include<bits/stdc++.h>
#define NUMS 100000
using namespace std;

unordered_map<int, int> getPrimes(int *spf, int inp){
    unordered_map<int, int> factors;

    if(inp == 0 || inp == 1){
        factors[inp]++;
    }

    if(inp < 0){
        factors[-1]++;
        inp *= -1;
    }

    while(inp > 1){
        factors[spf[inp]]++;
        inp /= spf[inp];
    }

    return factors;
}

template<class K, class V>
void display(unordered_map<K, V> inp){
    for(pair<K, V> p: inp){
        cout << '(' << p.first << ',' << p.second << ")\t";
    }
    cout << "\n======================================================================\n";
}

int main(){
    int* arr = new int[NUMS];

    // initial filling
    for(int i = 0; i < NUMS; i++){
        arr[i] = i;
    }

    // create seive
    for(int i = 2; i < NUMS; i++){
        if(arr[i] == i){
            for(int j = 2 * i; j < NUMS; j += i){
                if(arr[j] > i){
                    arr[j] = i;
                }
            }
        }
    }

    int queries;
    cout << "Enter number of queries: ";
    cin >> queries;

    while(queries--){
        int inp;
        cout << "Enter the input value: ";
        cin >> inp;

        display(getPrimes(arr, inp));
    }

    return 0;
}