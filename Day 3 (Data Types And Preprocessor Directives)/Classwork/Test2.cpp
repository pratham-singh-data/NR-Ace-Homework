# define M 1004 + 4
#include<iostream>
using namespace std;

int main(){
    cout << M << " "<< M * 100;

    // This will return 1004 and 1404 as on expansion the equation on right will become "1004 + 4 * 100"
    // which evaluates to 1404

    return 0;
}