#include<iostream>
using namespace std;

namespace name1{
    float a = 2.34;
}

namespace name2{
    float a = 6.89;
}

using namespace name1; // does not overwrite std; name1 is used wherever it is appropriate, 
// no error is returned on value not found, seen as it is applied once compiler is certain 
// of its existence in the namespace, that is it is one of the namespaces causing confusion.

int main(){
    // scope resolution operator(::) is used to specify namespace without using "using namesapce <namespace name>"
    cout << name1::a << endl;
    cout << name2::a << endl;
    cout << a << endl;
    return 0;
}

// homework:: 
// see file of iostream, ostream, istream
// setup VS Code
// do namesapce code done in class
// learn basics of compiler design