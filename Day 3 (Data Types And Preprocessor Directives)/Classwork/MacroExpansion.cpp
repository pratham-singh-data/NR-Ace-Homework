# define M 100
#include<iostream>
using namespace std;

// during maro expansion wherever we write M it is replaced with 100. M is not a variable, 
// rather just an alternate way to write 100.

int main(){
    int a = M + 200;
    cout << a;

    return 0;
}