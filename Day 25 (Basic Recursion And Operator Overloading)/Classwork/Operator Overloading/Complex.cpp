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

        Complex<T> operator - (Complex<T> a){
            Complex <T> res(this -> real - a.real, this -> imaginary - a.imaginary);
            return res; 
        }

        Complex<T> operator * (Complex<T> a){
            // (a + ib) * (x + iy)
            // (ax - by) + i(bx + ay)
            Complex <T> res((this -> real * a.real) - (this -> imaginary * a.imaginary), 
                            (this -> imaginary * a.real) + (this -> real * a.imaginary));
            return res; 
        }
};

int main(){
    int a, b;

    cout << "Enter real part of first number: ";
    cin >> a;
    cout << "Enter imaginary part of first number: ";
    cin >> b;

    Complex<double> c1(a, b);

    cout << "Enter real part of second number: ";
    cin >> a;
    cout << "Enter imaginary part of second number: ";
    cin >> b;

    Complex<double> c2(a, b);

    c1.display();
    c2.display();

    int choice;
    cout << "Your choices:\n1. Addition\n2. Subtraction\n3. Multiplication\nEnter your choice: ";
    cin >> choice;

    switch(choice){
        case 1: cout << "Addition: ";
                c1 = c1 + c2;
                c1.display();
                break;

        case 2: cout << "Subtraction: ";
                c1 = c1 - c2;
                c1.display();
                break;

        case 3: cout << "Multiplication: ";
                c1 = c1 * c2;
                c1.display();
                break;
        default: cout << "Invalid choice.\n";
    }

    cout << "Thanks for choosing us.\n";
    return 0;
}