#include<bits/stdc++.h>
using namespace std;

template<class K, class V>
class UnorderedMap{
    private:
        vector<pair<K, V>>* arr;
        int size;
        int unique;
        double thresholdDensity = 2.5;
        hash<K> myHash;

        int getHash(K key){
            return myHash(key) % size;
        }

        bool isPresent(K key){
            int index = getHash(key);

            vector<pair<K, V>> iter = arr[index];
            for(pair<K, V> p: iter){
                if(p.first == key) return true;
            }

            return false;
        }

        V getValue(K key){
            int index = getHash(key);
            vector<pair<K, V>> iter = arr[index];
            for(pair<K, V> p: iter){
                if(p.first == key) return p.second;
            }

            return V(NULL);
        }

        bool isFine(){
            return (double)unique / (double)size <= thresholdDensity;
        }

        void redistribute(int factor){
            int tempSize = factor * size;
            unique = 0;
            vector<pair<K, V>>* temp = new vector<pair<K, V>>[tempSize];

            swap(tempSize, size);
            swap(temp, arr);

            for(int i = 0; i < tempSize; i++){
                vector<pair<K, V>> iter = temp[i];
                for(pair<K, V> p: iter){
                    insert(p.first, p.second);
                }
            }
        }

        int find(vector<pair<K, V>> arr, pair<K, V> p){
            int index = 0;

            for(pair<K, V> temp: arr){
                if(temp == p){
                    break;
                }
                index++;
            }

            return index;
        }

    public:
        UnorderedMap(){
            size = 3;
            unique = 0;
            arr = new vector<pair<K, V>>[size];
        }

        void insert(K key, V value){
            int index = getHash(key);

            if(isPresent(key)){
                for(int i = 0; i < arr[index].size(); i++){
                    if(arr[index][i].first == key){
                        arr[index][i].second = value;
                        break;
                    }
                }
                return;
            }

            arr[index].push_back({key, value});
            unique++;

            if(! isFine()){
                redistribute(2);
            }
        }  

        void remove(K key){
            if(! isPresent(key)) return;

            int index = getHash(key);
            arr[index].erase(arr[index].begin() + find(arr[index], {key, getValue(key)}));
            unique--;

            if (!isFine()){
                redistribute(0.5);
            }
        } 

        void display(){
            for(int i = 0; i < size; i++){
                cout << i << '\n';
                vector<pair<K, V>> iter = arr[i];

                for(pair<K, V> p: iter){
                    cout << "\t\t" << p.first << '\t' << p.second << '\n';
                }
            }
            cout << "=======================================================================\n";
        }
};

int main(){
    UnorderedMap<double, int> um;

    for(double i = 0.5; i <= 100.5; i+=0.5){
        um.insert(i, i * i * i);
    }

    um.display();

    for (double i = 0.5; i <= 100.5; i += 0.5){
        um.insert(i, i * 2);
    }

    um.display();

    for (double i = 0.5; i <= 100.5; i += 0.5){
        cout << "Deleting: " << i << '\n';
        um.remove(i);
        um.display();
    }

    return 0;
}