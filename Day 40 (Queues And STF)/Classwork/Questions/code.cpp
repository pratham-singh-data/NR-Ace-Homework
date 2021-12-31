#include<bits/stdc++.h>
#define NUMS 1000000
using namespace std;

int main(){
    int *arr = new int[NUMS];
    memset(arr, -1, sizeof(int) * NUMS);
    arr[0] = arr[1] = 0;

    // get prime seive
    for(int i = 2; i < NUMS; i++){
        if(arr[i] == -1){
            for(int j = 2 * i; j < NUMS; j += i){
                arr[j] = 0;
            }
        }
    }

    int queries;
    cout << "Enter total queries: ";
    cin >> queries;


    while(queries--){
        int inp;
        cout << "Enter the input: ";
        cin >> inp;
        unordered_map<int, int> output;
        int primeAt = 0;

        while(inp != 1){
            while(arr[primeAt] != -1){
                primeAt++;
            }

            int prime = primeAt++;

            while(inp % prime == 0){
                inp /= prime;
                output[prime]++;
            }
        }

        for(pair<int, int> p: output){
            cout << '(' << p.first << ',' << p.second << ")\t"; 
        }
        cout << '\n';
    }

    return 0;
}