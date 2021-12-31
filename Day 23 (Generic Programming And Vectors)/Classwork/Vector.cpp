#include<iostream>
using namespace std;

template <typename T>
class Vector{
    private:
        T* arr;
        int counter;
        int currSize;

    public:
        Vector(){
            arr = new T[2];
            counter = 0;
            currSize = 2;
        }

        void display(){
            for(int i = 0; i < counter; i++){
                cout << arr[i] << ' ';
            }
            cout << '\n';
        }

        void push_back(T a){
            if(counter == currSize){
                T* temp = new T[2 * currSize];

                for(int i = 0; i < counter; i++){
                    temp[i] = arr[i];
                }   

                T* temp2 = arr;
                arr = temp;
                delete temp2;

                currSize *= 2;
            }

            arr[counter] = a;
            counter++;
        }

        T pop_back(){
            if(counter == 0){
                cout << "underflow\n";
                return T(0);
            }

            T res = arr[--counter];

            if(2 * counter == currSize){
                T* temp = new T[currSize / 2];

                for(int i = 0; i < counter; i++){
                    temp[i] = arr[i];
                }

                T* temp2 = arr;
                arr = temp;
                delete temp2;

                currSize /= 2;
            }

            return res;
        }
};

int main(){
    Vector<double> v;

    for(double i = 0; i <= 10; i++){
        v.push_back(i);
        v.display();
    }

    cout << "\n\n";

    for(double i = 0; i <= 10; i++){
        cout << v.pop_back() << '\n';

        v.display();
    }

    cout << "\n\n";

    for(double i = 0; i <= 10; i++){
        v.push_back(i);
        v.display();
    }

    cout << "\n\n";

    for(double i = 0; i <= 20; i++){
        cout << v.pop_back() << '\n';

        v.display();
    }

    cout << "\n\n";

    for(double i = 0.5; i <= 10.5; i++){
        v.push_back(i);
        v.display();
    }

    cout << "\n\n";

    for(double i = 0.5; i <= 20.5; i++){
        cout << v.pop_back() << '\n';

        v.display();
    }

    return 0;
}