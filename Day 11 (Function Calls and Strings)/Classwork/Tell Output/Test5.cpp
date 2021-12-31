#include <iostream>
using namespace std;

int main(){
    char arr[] = {'S', 'i', 'm', 'r', 'a', 'n', '\0'};
    cout << *(arr + 2) << " " << (arr + 2) << "\n";
    // m mran
    // as cout reads on being provided with a char address not a char itself
    return 0;
}