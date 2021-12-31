#include<bits/stdc++.h>
using namespace std;

// incomplete but keep for reference

template<class T>
class Node{
    public:
        Node* next;
        T data;

        Node(T data){
            this->data = data;
            next = NULL;
        }
};

template<class T>
class LinkedList{
    private:
        Node<T>* head;
    public:
        LinkedList(){
            head = NULL;
        }

        bool isEmpty(){
            return head == NULL;
        }

        T deleteFromHead(){
            if(isEmpty()){
                return T(0);
            }

            T data = head -> data;
            head = head->next;
            return data;
        }

        void insertAtEnd(T data){
            Node<T> *inserter = new Node<T>(data);

            if(isEmpty()){
                head = inserter;
                return;
            }

            Node<T>* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }

            temp->next = inserter;
        }

        void display(){
            Node<T>* iter = head;

            while(iter != NULL){
                cout << iter -> data << ' ';
                iter = iter -> next;
            }

            cout << '\n';
        }

        bool isPresent(T data){
            Node<T>* iter = head;

            while(iter != NULL){
                if(iter -> data == data) return true;
                iter = iter -> next;
            }

            return false;
        }

        bool deleteData(T data){
            Node<T> *iter = head;

            if (iter == NULL){
                return false;
            }

            if(iter->data == data){
                head = head->next;
            }

            while (iter->next != NULL){
                if (iter->next->data == data){
                    Node<T> *temp = iter->next;
                    iter->next = iter->next->next;
                    delete temp;
                    return true;
                }

                iter = iter->next;
            }

            return false;
        }
};

template<class K, class V>
class UnorderedMap{
    private:
        LinkedList<pair<K, V>> *arr;
        int size;
        int unique;
        hash<K> myHash;
        double thresholdDensity = 2.5;

        int getHash(K key){
            return myHash(key) % size;
        }

        bool isFine(){
            return (double) unique / (double) size > thresholdDensity;
        }

        void redistribute(int factor){
            int tempSize = factor * size;
            LinkedList<pair<K, V>>* temp = new LinkedList<pair<K, V>>[tempSize];

            swap(arr, temp);
            swap(tempSize, size);

            for(int i = 0; i < tempSize; i++){
                while(! temp[i].isEmpty()){
                    T data = temp[i].deleteFromHead();
                    insert(data);
                }
            }
        }

    public:
        UnorderedMap(){
            unique = 0;
            size = 3;
            arr = new LinkedList<pair<K, V>>[size];
        }

        V getKey(K key){
            int index = getHash(key);

            if (arr[index].isPresent(key) == NULL){
                return;
            }

            Node<pair<K, V>> *index = arr[index].isPresent(key);
            return (index->data).second;
        }

        void insert(K key, V value){
            int index = getHash(key);
            
            if(arr[index].isPresent(key)) return;

            arr[index].insertAtEnd((key, value));
            unique++;

            if(! isFine()){
                redistribute(2);
            }
        }

        // void display(){
        //     for(int i = 0; i < size; i++){
        //         cout << i << ":\t\t";
        //         arr[i].display();
        //     }

        //     cout << "\n\n";
        // }

        void remove(K key){
            int index = getHash(key);

            if(arr[index].deleteKey(key)){
                unique--;
            }

            if(! isFine()){
                redistribute(0.5);
            }
        }
};

int main(){
    
    return 0;
}