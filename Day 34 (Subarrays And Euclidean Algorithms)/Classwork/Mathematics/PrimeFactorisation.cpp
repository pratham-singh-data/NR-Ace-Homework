#include<bits/stdc++.h>
using namespace std;

vector<int> getPrimes(int n){
    vector<int> factors;
    int high = n; 
    // an unchanging number is needed here as say we get 24, after first division we get 12 then 6 then 3 
    // but after calculation we notice that 3 * 3 is not less than or equal to 9 so it will return false 
    // and we will not get this in the results 

    for(int i = 2; i * i <= high, n > 1; i++){
        while(n % i == 0){
            factors.push_back(i);
            n /= i;
        }
    }

    return factors;
}

void display(vector<int> arr){
    for(int x: arr){
        cout << x << ' ';
    }
    cout << '\n';
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    vector<int> primes = getPrimes(n);
    display(primes);

    return 0;
}

// in worst case the complexity is log(n) for display, O(sqrt(n)) is still the complexity for 
// factorisation()