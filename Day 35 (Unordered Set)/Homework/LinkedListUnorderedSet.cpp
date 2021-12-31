#include<bits/stdc++.h>
using namespace std;

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

template<class T>
class UnorderedMap{
    private:
        LinkedList<T> *arr;
        int size;
        int unique;
        hash<T> myHash;
        double thresholdDensity = 2.5;

        int getHash(T data){
            return myHash(data) % size;
        }

        bool isFine(){
            return (double) unique / (double) size > thresholdDensity;
        }

        void redistribute(int factor){
            int tempSize = factor * size;
            LinkedList<T>* temp = new LinkedList<T>[tempSize];

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
            arr = new LinkedList<T>[size];
        }

        void insert(T data){
            int index = getHash(data);
            
            if(arr[index].isPresent(data)) return;

            arr[index].insertAtEnd(data);
            unique++;

            if(! isFine()){
                redistribute(2);
            }
        }

        void display(){
            for(int i = 0; i < size; i++){
                cout << i << ":\t\t";
                arr[i].display();
            }

            cout << "\n\n";
        }

        void remove(T data){
            int index = getHash(data);

            if(arr[index].deleteData(data)){
                unique--;
            }

            if(! isFine()){
                redistribute(0.5);
            }
        }
};

int main(){
    UnorderedMap<double> um;

    for(double i = 0.5; i <= 1.5; i++){
        um.insert(i);
    }

    um.display();

    for(double i = 51; i <= 100.5; i += 0.5){
         um.remove(i);
         um.display();
    }

    for (double i = 1.5; i >= 0.5; i -= 0.5){
        um.remove(i);
        um.display();
    }

    return 0;
}