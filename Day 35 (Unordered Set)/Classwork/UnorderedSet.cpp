#include<bits/stdc++.h>
using namespace std;

template<class T>
class Node{
    public:
        T data;
        Node* next;

        Node(T data){
            this -> data = data;
        }
};

template<class T>
class LinkedList{
    private:
        Node<T> *head;
        int length;

    public:
        LinkedList(){
            head = NULL;
            length = 0;
        }

        void insertAtHead(T data){
            Node<T>* temp = new Node<T>(data);
            temp -> next = head;
            head = temp;
            length++;
        }

        T deleteFromHead(){
            Node<T>* temp = head;
            if(head == NULL){
                return T(0);
            }

            head = head -> next;
            T data = temp -> data;
            delete temp;

            length--;
            return data;
        }

        void insertAtEnd(T data){
            Node<T>* temp = new Node<T>(data);
            temp -> next = NULL;

            if(head == NULL){
                head = temp;
                length++;
                return;
            }

            Node<T>* iter = head;
            while(iter -> next != NULL){
                iter = iter -> next;
            }

            iter -> next = temp;
            length++;
        }

        T deleteFromEnd(){
            Node<T>* iter = head;

            if(head == NULL){
                return T(0);
            }

            if(head -> next == NULL){
                T data = head -> data;
                delete head;
                head = NULL;
                length--;
                return data;
            }

            while (iter -> next -> next != NULL){
                iter = iter->next;
            }

            Node<T>* temp = iter -> next;
            iter -> next = NULL;
            T data = temp -> data;
            delete temp;
            length--;
            return data;
        }   

        int size(){
            return length;
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
            Node<T>* temp = head;

            while(temp != NULL){
                if(temp -> data == data){
                    return true;
                }

                temp = temp -> next;
            }

            return false;
        }

        bool deleteData(T data){
            if ((!isPresent(data)) || (head == NULL)){
                return false;
            }

            if(head->data == data){
                Node<T> *temp = head;
                head = head->next;
                delete temp;
                return true;
            }

            Node<T> *temp = head;
            while (temp -> next != NULL){
                if(temp -> next -> data == data){
                    Node<T>* temp1 = temp -> next;
                    temp -> next = temp -> next -> next;
                    delete temp1;
                    return true;
                }

                temp = temp -> next;
            }

            return false;
        }

        bool isEmpty(){
            return head == NULL;
        }

        Node<T>* getHead(){
            return head;
        }
};

template<class T>
class UnorderedSet{
    // data members:
    // linkedlist[]
    // number of unique elements in set
    // number of uniwue elements
    // size of array current
    
    // Member functions:
    // insert()
    // delete()
    // search()
    // hash_function
    // we will use a predefined hash defined in stl in order to avoid making our own hash function, we 
    // can learn how to create our own hash later.
    private:
        LinkedList<T> *arr;
        int size;
        int unique;
        hash<T> myHash;
        double thresholdDensity = 1.5;

        bool fineDensity(){
            return (double(unique) / double(size) < thresholdDensity);
        }

        void redistribution(int newsize){
            LinkedList<T>* temp = new LinkedList<T>[newsize];
            swap(arr, temp);
            int oldSize = size;
            size = newsize;
            unique = 0;

            for(int i = 0; i < oldSize; i++){
                while(! temp[i].isEmpty()){
                    insert(temp[i].deleteFromHead());
                }
            }
        }

    public:
        UnorderedSet(){
            arr = new LinkedList<T>[size];
            size = 3;
            unique = 0;
        }

        int getHash(T data){
            return myHash(data) % size;
        }

        void insert(T data){
            int index = getHash(data);
            
            if(arr[index].isPresent(data)){
                return;
            }

            arr[index].insertAtEnd(data);
            unique++;

            if(! fineDensity()){
                redistribution(2 * size);
            }
        }

        void remove(T data){
            int index = getHash(data);

            if (!arr[index].isPresent(data)){
                return;
            }

            if(arr[index].deleteData(data)){
                unique--;
            }

            if(!fineDensity()){
                redistribution(0.5 * size);
            }
        }

        void display(){
            for(int i = 0; i < size; i++){
                cout << i << '\t';
                arr[i].display();
            }
        }

        bool isPresent(T data){
            int index = getHash(data);

            return arr[index].isPresent(data);
        }
};

int main(){
    UnorderedSet<double> us;

    for(double i = 0.5; i <= 20.5; i++){
        us.insert(i);
    }

    us.display();

    for (double i = 5.5; i <= 30.5; i++){
        us.remove(i);
        cout << '\n';
        us.display();
    }

    // for (double i = 0.5; i <= 100.5; i++){
    //     cout << us.isPresent(i) << '\t';
    // }

    cout << '\n';

    return 0;
}