#include <bits/stdc++.h>
using namespace std;

template<class T>
class Node{
    public:
        T data;
        Node<T>* left;
        Node<T>* right;
        
        Node(T data){
            this->data = data;
            left = right = NULL;
        }
};

template<class T>
void addNode(Node<T>*& root, T data){
    if(root == NULL){
        root = new Node<T>(data);
        return;
    }
    
    int choice;
    cin >> choice;
    
    if(choice == 1) addNode(root->left, data);
    else addNode(root->right, data);
}

template<class T>
void inorder(Node<T>* root){
    if(root == NULL){
        return;
    }
    
    inorder(root->left);
    cout << root->data << ' ';
    inorder(root->right);
}

template<class T>
void createMirror(Node<T>*& mirror, Node<T>* root){
    if(root == NULL){
        return;
    }
    
    mirror = new Node<T>(root->data);
    createMirror(mirror->left, root->right);
    createMirror(mirror->right, root->left);
}

int main(){
    int tests;
    cin >> tests;
    
    while(tests--){
        Node<int>* root = NULL;
        int nodes;
        cin >> nodes;
    
        while(nodes--){
            int data;
            cin>> data;
            addNode(root, data);
        }
    
        cout << "Original Inorder: ";
        inorder(root);
    
        Node<int>* mirror = NULL;
        createMirror(mirror, root);
        cout << "\nMirror Inorder: ";
        inorder(mirror);
        
        cout << "\n\n";
    }
    
    return 0;
}