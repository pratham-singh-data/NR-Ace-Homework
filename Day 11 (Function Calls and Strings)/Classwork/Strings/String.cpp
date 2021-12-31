#include<iostream>
using namespace std;

int main(){
    char arr[] = {'s', 'i', 'm', 'r', '\0', 'a', 'n'};
    cout << arr[0] << ' ' << arr[4] << ' ' << arr[2] << '\n';

    char p = 'r';
    char* x = &p;
    cout << x << '\n'; // x may be allocated near the char array, done for quick memeory access, so calling
    // it might cause a part of the array to also be printed, utill the null charchter.
    cout << arr << '\n';
    return 0;
}