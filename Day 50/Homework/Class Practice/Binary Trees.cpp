#include<bits/stdc++.h>
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
    cout << "1: Left Childe\t 2: Right Child: ";
    cin >> choice;

    if(choice == 1){
        addNode(root->left, data);
    }
    else{
        addNode(root->right, data);
    }
}

template<class T>
void preorder(Node<T>* root){
    if(root == NULL){
        return;
    }

    cout << ' ' << root->data; // print current;
    preorder(root->left); // traverse left subtree
    preorder(root->right); // traverse left subtree
}

template <class T>
void inorder(Node<T> *root){
    if (root == NULL){
        return;
    }

    inorder(root->left);      // traverse left subtree
    cout << ' ' << root->data; // print current;
    inorder(root->right);     // traverse left subtree
}

template <class T>
void postorder(Node<T> *root){
    if (root == NULL){
        return;
    }

    postorder(root->left);      // traverse left subtree
    postorder(root->right);     // traverse left subtree
    cout << ' ' << root->data;  // print current;
}

template<class T>
void levelOrder(Node<T>* root){
    if(root == NULL) return;

    queue<Node<T>*> q;
    q.push(root);

    while(! q.empty()){
        Node<T>* node = q.front();
        q.pop();

        cout << node->data << ' ';
        
        if(node->left){
            q.push(node->left);
        }

        if (node->right){
            q.push(node->right);
        }
    }
}

void line(){
    cout << "\n\n";

    for(int i = 0; i < 60; i++){
        cout << '=';
    }

    cout << "\n\n";
}

int main(){
    int node;
    cout << "Enter total nodes: ";
    cin >> node;
    Node<double>* root = NULL;

    while(node--){
        double data;
        cout << "\n\nEnter Data: ";
        cin >> data;
        addNode(root, data);
    }

    line();
    cout << "Preorder Traversal:\n\t";
    preorder(root);

    line();
    cout << "Inorder Traversal:\n\t";
    inorder(root);

    line();
    cout << "Postorder Traversal:\n\t";
    postorder(root);

    line();
    cout << "Level Order Traversal:\n\t";
    levelOrder(root);

    return 0;
}