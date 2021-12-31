#include<iostream>
using namespace std;

template<typename T>
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
    // double
    LinkedList<double> ls;

    for (double i = 0.5; i <= 10.5; i++){
        cout << ls.deleteAtEnd() << '\n';
    }

    for(double i = 0.5; i <= 10.5; i++){
        ls.insertAtEnd(i);
    }

    ls.display();
    ls.size();

    for (double i = 0.5; i <= 10.5; i++){
        cout << ls.deleteAtEnd() << '\n';
    }

    ls.display();
    ls.size();

    for (double i = 0.5; i <= 10.5; i++){
        ls.insertAtHead(i);
    }

    ls.display();
    ls.size();

    for (double i = 0.5; i <= 10.5; i++){
        cout << ls.deleteAtEnd() << '\n';
    }

    ls.display();
    ls.size();

    for (double i = 0.5; i <= 10.5; i++){
        ls.insertAtEnd(i);
    }

    ls.display();
    ls.size();

    for (double i = 0.5; i <= 10.5; i++){
        ls.insertAtHead(i);
    }

    ls.display();
    ls.size();

    for (double i = 0.5; i <= 10.5; i++){
        cout << ls.deleteAtEnd() << '\n';
    }

    ls.display();
    ls.size();

    return 0;
}