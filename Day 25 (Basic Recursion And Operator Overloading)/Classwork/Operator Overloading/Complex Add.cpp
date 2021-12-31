#include<iostream>
using namespace std;

template<class T>
class Complex{
    private:
        T real;
        T imaginary;
    
    public:
        Complex(T a, T b){
            this -> real = a;
            this -> imaginary = b;
        }

        void display(){
            cout << real << "+ i" << imaginary << '\n'; 
        }

        Complex<T> operator + (Complex<T> a){
            Complex <T> res(this -> real + a.real, this -> imaginary + a.imaginary);
            return res; 
        }
};

int main(){
    Complex<int> c1(5, 7);
    Complex<int> c2(3, 2);

    c1.display();
    c2.display();

    c1 = c1 + c2;
    c1.display();

    return 0;
}