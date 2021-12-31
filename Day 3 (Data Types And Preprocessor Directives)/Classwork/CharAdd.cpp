#include<iostream>
using namespace std;

int main(){
    char a;

    cout << "Enter a character: ";
    cin >> a;

    cout << (char) (a + 2) << endl;
    // conversion is necessay as dur to char holding 1 Byte and int holding 4 bytes, addition converts
    // char to int, hence we need to typecast it back to char.
    return 0;
}