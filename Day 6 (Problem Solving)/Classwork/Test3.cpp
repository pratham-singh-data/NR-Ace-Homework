#include<iostream>
using namespace std;

// size of output when this is run
// infinte loop as i won't update past the first even number; 4

int main(){
    int i = 1;

    while(i < 20){
        cout << i << '\t';
        
        if(i % 2 == 0){
            continue;
        }
        else{
            i += 2;
        }

        i++;
    }

    return 0;
}