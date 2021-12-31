#include<iostream>
using namespace std;

template<class T>
class Node{
    public: 
        T data;
        Node* next;
};

template<class T>
class CircularLinkedList{
    private:
        Node<T>* head;
        int length;

    public:
        CicularLinkedList(){
            head = NULL;
            length = 0;
        }

        void display(){
            if(head == NULL){
                // empty list
                cout << "Nothing to display.\n";
                return;
            }

            Node<T>* temp = head;

            do{
                cout << temp -> data << ' ';
                temp = temp -> next;
            }while(temp != head);

            cout << '\n';
        }

        void insertAtStart(T data){
            Node<T>* temp = new Node<T>();
            temp -> data = data;

            if(head == NULL){
                // empty list
                temp -> next = temp;
            }
            else{
                temp -> next = head -> next;

                Node<T> *temp1 = head;
                while (temp1->next != head){
                    temp1 = temp1 -> next;
                }

                temp1 -> next = temp;
                head = temp;
            }

            length++;
        }
};

int main(){
    CircularLinkedList<double> c;
    c.display();

    for(double i = 0.5; i <= 10.5; i++){
        c.insertAtStart(i);
    }

    c.display();
    return 0;
}