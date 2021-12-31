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
            Node<T>* temp = new Node<T>(data);
            temp->next = head;
            head = temp;
        }

        T seeHead(){
            if(head == NULL){
                return T(NULL);
            }

            return head->data;
        }

        T deleteFromHead(){
            if(head == NULL){
                return T(NULL);
            }

            T data = head->data;
            Node<T>* temp = head;
            head = head->next;
            delete temp;
            return data;
        }

        void display(){
            Node<T>* iter = head;

            if(iter == NULL){
                cout << "Nothing to display...";
            }

            while(iter != NULL){
                cout << iter->data << '\t';
                iter = iter->next;
            }

            cout << "\n===========================================================\n";
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

        void display(){
            ls.display();
        }

        T pop(){
            size--;
            return ls.deleteFromHead();
        }

        T top(){
            return ls.seeHead();
        }
};

int main(){
    Stack<double> s;

    for(double i = 0.5; i <= 10.5; i += 0.5){
        s.push(i);
    }

    s.display();

    for (double i = 10.5; i >= 0.5; i -= 0.5){
        cout << "Trying: " << i << '\n';
        cout << "Deleted: " << s.pop() << '\n';
        s.display();
        cout << "At Top: " << s.top() << '\n';
    }
    return 0;
}