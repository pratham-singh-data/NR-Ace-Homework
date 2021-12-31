// pass array into reverse() and all elements should appear in reverse

#include <iostream>
using namespace std;

void show(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }

    cout << endl;
}

void fun(int arr[], int n){
    // not this arr is not the same as the main() arr, but they both point to the same array.
    // i.e different pointer, same value
    arr[1] = 23;
    cout << &arr << '\t';
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cout << "Enter value at index " << i << " : ";
        cin >> arr[i];
    }

    cout << &arr << '\t';

    show(arr, n);
    fun(arr, n);
    show(arr, n);
    return 0;
}