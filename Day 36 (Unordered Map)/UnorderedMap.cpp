#include<iostream>
using namespace std;

template<class T>
class Node{
    public:
        T data;
        Node<T>* next;

        Node(T data){
            this->data = data;
            next = NULL;
        }
};

template<class K, class V>
class LinkedList{
    private:
        Node<pair<K, V>>* head;

    public:
        LinkedList(){
            head = NULL;
        }

        void insertAtEnd(K key, V value){
            Node<pair<K, V>> *temp = new Node<pair<K, V>>(pair<K, V>(key, value));

            if(head == NULL){
                head = temp;
                return;
            }

            Node<pair<K, V>>* iter = head;
            while(iter->next != NULL){
                iter = iter->next;
            }

            iter->next = temp;
        }

        void deleteKey(K key){
            Node<pair<K, V>>* iter = head;

            if(head == NULL){
                return;
            }

            if(head->data.first == key){
                if(head->next == NULL){
                    delete head;
                    head = NULL;
                    return;
                }

                delete iter;
                head = head->next;
            }

            while(iter->next != NULL){
                if(iter->next->data.first == key){
                    Node<pair<K, V>>* temp = iter->next;
                    iter->next = iter->next->next;
                    delete temp;
                    break;
                }
                iter = iter -> next;
            }
        }

        void display(){
            Node<pair<K, V>>* iter = head;

            while(iter != NULL){
                cout << "\t\t" << iter->data.first << '\t' << iter->data.second << '\n';
                iter = iter->next;
            }
        }

        Node<pair<K, V>>* isPresent(K key){
            Node<pair<K, V>>* iter = head;

            while(iter != NULL){
                if(iter->data.first == key) return iter;
                iter = iter->next;
            }

            return NULL;
        }

        bool isEmpty(){
            return (head == NULL);
        }

        Node<pair<K, V>>* forgetHead(){
            if(head == NULL){
                return NULL;
            }

            Node<pair<K, V>>* node = head;
            head = head -> next;
            return node;
        }
};

template<class K, class V>
class UnorderedMap{
    private:
        LinkedList<K, V>* arr;
        int size;
        int unique;
        hash<K> myHash;
        double thresholdDensity = 2.5;

        int getHash(K key){
            return myHash(key) % size;
        }

        bool isFine(){
            return (double) unique / (double) size <= thresholdDensity;
        }

        void redistribute(double factor){
            unique = 0;
            int tempSize = factor * size;
            LinkedList<K, V>* temp = new LinkedList<K, V>[tempSize];

            swap(arr, temp);
            swap(tempSize, size);

            for(int i = 0; i < tempSize; i++){
                while(! temp[i].isEmpty()){
                    Node<pair<K, V>>* node = temp[i].forgetHead();
                    insert(node->data.first, node->data.second);
                    delete node;
                }
            }
        }

    public:
        UnorderedMap(){
            size = 3;
            unique = 0;
            arr = new LinkedList<K, V>[size];
        }

        void insert(K key, V value){
            int index = getHash(key);
            Node<pair<K, V>>* node= arr[index].isPresent(key);

            if(node == NULL){
                arr[index].insertAtEnd(key, value);
                unique++;
            }
            else{
                node->data.second = value;
                return;
            }

            if (!isFine()){
                redistribute(2);
            }
        }

        void display(){
            for(int i = 0; i < size; i++){
                cout << i << '\n';
                arr[i].display();
            }
            cout << "================================================================\n";
        }

        V search(K key){
            int index = getHash(key);

            Node<pair<K, V>>* node =  arr[index].isPresent(key);
            
            if(node == NULL){
                return V(NULL);
            }

            return node->data.second;
        }

        Node<pair<K, V>>* isPresent(K key){
            int index = getHash(key);
            return arr[index].isPresent(key);
        }

        void deleteKey(K key){
            int index = getHash(key);
            Node<pair<K, V>>* node = arr[index].isPresent(key);

            if(node == NULL){
                return;
            }

            arr[index].deleteKey(key);
            unique--;

            if(! isFine()){
                redistribute(0.5);
            }
        }
};

int main(){
    UnorderedMap<double, int> um;

    for (double i = 0.5; i <= 10.5; i += 0.5){
        um.insert(i, i * i * i);
        um.display();
    }

    um.display();

    for (double i = 0.5; i <= 20.5; i += 0.5){
        cout << um.search(i) << '\n';
    }

    cout << "================================================================\n";

    for (double i = 0.5; i <= 20.5; i += 0.5){
        Node<pair<double, int>>* node = um.isPresent(i);

        if(node == NULL){
            cout << int(NULL) << '\n';
        }
        else{
            cout << node->data.second << '\n';
        }
    }

    cout << "================================================================\n";

    for (double i = 0.5; i <= 20.5; i += 0.5){
        cout << "Deletion value: " << i << '\n';
        um.deleteKey(i);
        um.display();
    }

    for (double i = 0.5; i <= 10.5; i += 0.5){
        um.insert(i, i * i * i);
    }

    um.display();

    for (double i = 0.5; i <= 10.5; i += 0.5){
        um.insert(i, i * i);
    }

    um.display();

    return 0;
}