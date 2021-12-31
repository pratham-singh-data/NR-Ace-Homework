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

template<class T>
class LinkedList{
    private:
        Node<T>* head;

    public:
        LinkedList(){
            head = NULL;
        }

        void insertAtHead(T data){
            Node<T> *temp = new Node<T>(data);
            temp->next = head;
            head = temp;
        }

        T deleteFromHead(){
            if(head == NULL){
                return T(NULL);
            }

            Node<T> *temp = head;
            head = head->next;
            
            T data = temp->data;
            delete temp;
            return data;
        }

        void display(){
            Node<T>* iter = head;

            while(iter != NULL){
                cout << iter->data << '\t';
                iter = iter->next;
            }

            cout << '\n';
        }

        bool isEmpty(){
            return head == NULL;
        }

        T getHead(){
            if(head == NULL) return T(NULL);
            return head->data;
        }
};

template<class T>
class Stack{
    private:
        LinkedList<T> ls;
        int size;

    public:
        Stack(){
            size = 0;
        }

        void push(T data){
            ls.insertAtHead(data);
            size++;
        }

        T pop(){
            if(size == 0) return T(NULL);

            size--;
            return ls.deleteFromHead();
        }

        T top(){
            return ls.getHead();
        }

        void display(){
            ls.display();
        }
};

int main(){
    Stack<double> s;

    for(double i = 0.5; i <= 10.5; i += 0.5){
        s.push(i);
    }

    cout << s.top() << "\n\n";

    s.display();

    for (double i = 0.5; i <= 12.5; i += 0.5){
        cout << s.pop() << '\n';
        s.display(); 
        cout << "\n================\n";
    }

    return 0;
}

// error gets thrown if we use T = string as string(NULL) is undefined