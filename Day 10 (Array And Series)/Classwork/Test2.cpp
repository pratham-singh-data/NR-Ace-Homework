#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    cout << arr << '\n' << *arr << '\n';
    cout << *(arr + 2) << '\n';
    return 0;
}