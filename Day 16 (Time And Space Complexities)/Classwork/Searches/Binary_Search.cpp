#include<iostream>
using namespace std;

bool binarySearch(int arr[], int low, int high, int target){
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == target){
            return true;
        }
        else if(arr[mid] > target){
            high = mid - 1;
            continue;
        }
        else{
            low = mid + 1;
        }
    }

    return false;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter value at index " << i << " : ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter value to be found: ";
    cin >> target;


    if(binarySearch(arr, 0, n, target)){
        cout << "Value is present.\n";
    }
    else{
        cout << "Value is not present.\n";
    }

    return 0;
}