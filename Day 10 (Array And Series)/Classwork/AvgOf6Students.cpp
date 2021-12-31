// average of n student's marks

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cout << "Enter marks of student " << i + 1 << " : ";
        cin >> arr[i];
    }

    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    cout << sum/n;
    return 0;
}