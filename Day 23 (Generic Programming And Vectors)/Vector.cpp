#include<iostream>
using namespace std;

template<typename T>
class Vector{
    private:
        T* arr;
        int counter = 0;
        int currSize = 2;
    
    public:
        Vector(){
            arr = new T[2];
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

            arr[counter++] = a;
        }

        T pop_back(){
            if(counter == 0){
                cout << "underflow";
                return T(0);
            }

            T a = arr[counter--];

            if (2 * counter == currSize){
                T *temp = new T[currSize / 2];

                for (int i = 0; i < counter; i++){
                    temp[i] = arr[i];
                }

                T *temp2 = arr;
                arr = temp;
                delete temp2;

                currSize /= 2;
            }

            return a;
        }
};

int main(){
    Vector<double> inp;

    for(double i = 0.5; i <= 10.56 ;i++){
        inp.push_back(i);
    }

    inp.display();
    cout << '\n';

    for(int i = 0; i <= 10.56; i++){
        cout << inp.pop_back() << '\n';

        if(int(i % 9) == 0) inp.display();
    }

    inp.display();

    for (double i = 0.5; i <= 10.56; i++){
        inp.push_back(i);
    }

    inp.display();
    cout << '\n';

    for (int i = 0; i <= 10.56; i++){
        cout << inp.pop_back() << '\n';

        if (int(i % 4) == 0)
            inp.display();
    }

    inp.display();

    return 0;
}