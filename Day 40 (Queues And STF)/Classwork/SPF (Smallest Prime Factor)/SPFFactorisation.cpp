#include<bits/stdc++.h>
#define NUMS 100000
using namespace std;

unordered_map<int, int> getPrimes(int spf[], int inp){
    unordered_map<int, int> output;

    if(inp == 1 || inp == 0){
        output[inp]++;
    }

    if(inp < 0){
        inp *= -1;
        output[-1]++;
    }

    while(inp > 1){
        output[spf[inp]]++;
        inp /= spf[inp];
    }

    return output;
}

template<class K, class V>
void display(unordered_map<K, V> inp){
    for(pair<K, V> data: inp){
        cout << '(' << data.first << ',' << data.second << ")\t";
    }
    cout << "\n==============================================================\n";
}

int main(){
    int spf[NUMS];

    // initial filling
    for(int i = 0; i < NUMS; i++){
        spf[i] = i;
    }

    // fill spf seive
    for(int i = 2; i < NUMS; i++){
        if(spf[i] == i){
            for(int j = 2 * i; j < NUMS; j += i){
                if(spf[j] > i){
                    spf[j] = i;
                }
            }
        }
    }

    int queries;
    cout << "Enter total queries: ";
    cin >> queries;

    while(queries--){
        int inp;
        cout << "Enter input: ";
        cin >> inp;

        display(getPrimes(spf, inp));
    }

    return 0;
}