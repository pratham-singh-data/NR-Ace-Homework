#include<iostream>
using namespace std;

class Complex{
    private:
        double real;
        double imaginary;
    
    public:
        Complex(double a, double b){
            real = a;
            imaginary = b;
        }

        void display(){
            cout << real << "+ i" << imaginary << '\n';
        }

        Complex operator + (Complex a){
            return Complex(this->real + a.real, this->imaginary + a.imaginary);
        }

        void operator += (Complex a){
            this -> real += a.real;
            this -> imaginary += a.imaginary;
        }

        Complex operator - (Complex a){
            return Complex(this->real - a.real, this->imaginary - a.imaginary);
        }

        void operator -= (Complex a){
            this->real -= a.real;
            this->imaginary -= a.imaginary;
        }

        Complex operator ++ (){
            // pre increment
            this->real++;
            this->imaginary++;
            return *this;
        }

        Complex operator -- (){
            // pre decrement
            this->real--;
            this->imaginary--;
            return *this;
        }

        Complex operator ++ (int a){
            // post increment
            Complex temp = *this;
            this->real++;
            this->imaginary++;
            return temp;
        }

        Complex operator -- (int a){
            // post decrement
            Complex temp = *this;
            this->real--;
            this->imaginary--;
            return temp;
        }
};

int main(){
    double a, b;

    cout << "Enter real part of first number: ";
    cin >> a;
    cout << "Enter imaginary part of first number: ";
    cin >> b;

    Complex c1(a, b);

    cout << "Enter real part of second number: ";
    cin >> a;
    cout << "Enter imaginary part of second number: ";
    cin >> b;

    Complex c2(a, b);

    c1.display();
    c2.display();

    cout << "\n+\n";
    c1 = c1 + c2;

    c1.display();
    c2.display();

    cout << "\n+=\n";
    c1 += c2;

    c1.display();
    c2.display();

    cout << "\n-\n";
    c1 = c1 - c2;

    c1.display();
    c2.display();

    cout << "\n-=\n";
    c1 -= c2;

    c1.display();
    c2.display();
    cout << "\n\n";

    cout << "\n++a\n";
    c2 = ++c1;
    c1.display();
    c2.display();

    cout << "\n--a\n";
    c2 = --c1;
    c1.display();
    c2.display();

    cout << "\na++\n";
    c2 = c1++;
    c1.display();
    c2.display();

    cout << "\na--\n";
    c2 = c1--;
    c1.display();
    c2.display();

    return 0;
}