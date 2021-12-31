#include<iostream>
using namespace std;

template<class T>
class Node{
    public:
        T data;
        Node<T>* next;

        Node(T data){
            this -> data = data;
        }
};

template<class T>
class LinkedList{
    private:
        Node<T>* head;
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

        void insertAtMid(T data, int k){
            if(k >= length){
                insertAtEnd(data);
                return;
            }

            Node<T> *temp = new Node<T>(data);

            temp->next = head;

            for(int i = 0; i < k - 1; i++){
                temp -> next = temp -> next -> next;
            }

            Node<T>* temp1 = temp -> next -> next;
            temp -> next -> next = temp;
            temp -> next = temp1;

            length++;
        }

        T deleteAtHead(){
            Node<T> *temp = head;
            if(head == NULL){
                return T(0);
            }

            head = head -> next;
            T data = temp -> data;
            delete temp;

            length--;
            return data;
        }

        T deleteAtMid(int k){
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

            Node<T> *temp = head;

            if(k >= length){
                k = length - 1;
            }

            for(int i = 0; i < k - 1; i++){
                temp = temp -> next;
            }

            // we are now one behind k
            
            T data = temp -> next -> data;
            Node<T> *temp1 = temp -> next;
            temp -> next = temp -> next -> next;
            delete temp1;

            length--;
            return data;
        }

        T deleteAtEnd(){
            Node<T> *temp = head;

            if (head == NULL){
                return T(0);
            }

            if(head -> next == NULL){
                T data = head -> data;
                delete head;
                head = NULL;
                length--;
                return data;
            }

            while(temp -> next -> next != NULL){
                temp = temp -> next;
            }

            // we are now at second to last element
            T data = temp -> next -> data;
            delete temp -> next;
            temp -> next = NULL;

            length--;
            return data;
        }

        void insertAtEnd(T data){
            Node<T> *temp = new Node<T>(data);
            temp -> next = head;

            if (head == NULL){
                head = temp;
                length++;
                return;
            }

            while(temp -> next -> next != NULL){
                temp -> next = temp -> next -> next;
            }

            temp -> next -> next = temp;
            temp -> next = NULL;

            // deleting temp is unnecessary as being a local variable it is deleted anyway and 
            // delete(temp) will delete the node and not the variable.

            length++;
        }

        void size(){
            cout << length << '\n';
        }

        void display(){
            Node<T>* temp = head;
            
            while(temp != NULL){
                cout << temp -> data << ' ';
                temp = temp -> next;
            }

            cout << '\n';
        }
};

int main(){
    LinkedList<double> ls;

    for(double i = 0.5; i <= 10.5; i++){
        ls.insertAtMid(i, 5);
    }

    ls.display();
    ls.size();

    for(double i = 0.5; i <= 4.5; i++){
        cout << ls.deleteAtMid(4) << '\n';
    }

    ls.display();
    ls.size();

    for(double i = 0.5; i <= 14.5; i++){
        cout << ls.deleteAtMid(4) << '\n';
        ls.display();
    }

    ls.display();
    ls.size();
    return 0;
}