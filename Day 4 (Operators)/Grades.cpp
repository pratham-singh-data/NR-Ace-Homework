#include<iostream>
using namespace std;

string grade(int marks){
    if(marks >= 90) 
        return "A+";
    else if(marks >= 80)
        return "A";
    else if(marks >= 70)
        return "B+";
    else if(marks >= 60)
        return "B";
    else if(marks >= 50)
        return "C+";
    else if(marks >= 40)
        return "C";
    else return "F";
}

int main(){
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Your Grade is : " << grade(marks);
    return 0;
}