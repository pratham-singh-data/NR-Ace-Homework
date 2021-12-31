#include<bits/stdc++.h>
using namespace std;

template<class K, class V>
class UnorderedMap{
    private:
        vector<pair<K, V>>* arr;
        int size;
        int unique;
        hash<K> myHash;
        double threshold = 2.5;

        int getHash(K key){
            return myHash(key) % size;
        }

        bool fineDensity(){
            return double(size) / (double(unique) + 0.000001) <= threshold;
        }

        void redistribute(double factor){
            int tempSize = factor * size;
            vector<pair<K, V>>* temp = new vector<pair<K, V>>[tempSize];

            swap(arr, temp);
            swap(size, tempSize);
            unique = 0;

            for(int i = 0; i < tempSize; i++){
                vector<pair<K, V>> temp2 = temp[i];
                for(pair<K, V> p: temp2){
                    insert(p.first, p.second);
                }
            }
        }

        bool isPresent(K key){
            int index = getHash(key);

            for (pair<K, V> p : arr[index]){
                if (p.first == key){
                    return true;
                }
            }

            return false;
        }

        V getValue(K key){
            int index = getHash(key);

            for(pair<K, V> p: arr[index]){
                if(p.first == key){
                    return p.second;
                }
            }

            return NULL;
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
                return;
            }

            arr[index].push_back({key, value});
            unique++;

            if(! fineDensity()){
                redistribute(2);
            }
        }

        void remove(K key){
            int index = getHash(key);

            if(! isPresent(key)){
                return;
            }

            arr[index].erase(arr[index].find({key, get(key)}));
            unique--;

            if(!fineDensity()){
                redistribute();
            }
        }

        void display(){
            for(int i = 0; i < size; i++){
                vector<pair<K, V>> temp = arr[i];
                cout << i << '\n';

                for(pair<K, V> p: temp){
                    cout << "\t\t" << p.first << '\t' << p.second << '\n';
                }
            }
        }
};

int main(){
    UnorderedMap<double, int> um;

    for(double i = 0.5; i <= 10.5; i += 0.5){
        um.insert(i, i * i * i);
    }
    um.display();

    return 0;
}