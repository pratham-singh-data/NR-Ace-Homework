#include<iostream> // you can access these files in bin part of mingw-x64 or mingw32 in program files.
// iostream is a combination of istream and ostream, they dont contain entire difinition as their actual 
// implementation is in isteam and ostream files.
// header files containdefinitions and functionality of different things used in our program
using namespace std;
// std is the namespace under which the cout and cin is defined, we are telling compiler to access cout 
// and cin of the std namespace.
// eg. Teacher tells you to define dog, we have three dictionares, oxford, webster, urban all might have 
// differnt definitions of dog, for teacher to get any specifc definition, he need ss to specify which 
// dictionary is to be referred when providing the answer, by the same concept here we are telling the 
// compiler to use the cout or cin written in std whenever we call for cin or cout in pur code.

int main(){
// main() is the entry point of a program that the OS tries to find when executing the program.
// int here is the regturn value, here it is an integer.
    cout << "Hello world \n we are here"; 
    // cout is console output; it prints "Hello World" in the output console.
    // /n tells compiler to move to next line
    // endl does a + operator alongside \n so \n is comparitively better.
    return 0;
    // it tells that 0 is to be returned to the OS tellling it that the program is run successfully.
    // a non zero number tells that an error has found.
    // Note OS does nothing in case of an error, thye return value merely acts as a checkmark.
    // As of c++11 even if return 0 is not written code still runs. They treat the feedback 
    // of error as optional wheras previous compilers teated it as mandatory.
    // also 0 is not needed, we may give any random value. 0 is just the convention.
    // Take for example  amanager taking feedback of a commitee on a function, even if committe gives a 
    // negative feedback for exemplary work, the manager can do nothing about it.
    // though remember return ends the function, so any subsequent code lines after return sttement is 
    // not executed.
}

//note g++ runs c++ code
// gcc runs c code

// syntax: g++ -std=<std name> <file name> -o <obeject flle name>
// g++ -std=c++17 HelloWorld.cpp -o HelloWorld
// to run this file