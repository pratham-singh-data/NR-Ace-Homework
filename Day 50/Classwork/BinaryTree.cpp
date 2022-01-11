#include<bits/stdc++.h>
using namespace std;

template<class T>
class Node{
    public:
        T data;
        Node<T> *left, *right;

        Node(T data){
            this-> data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

template <class T>
Node<T> *insert(Node<T> *root, T data){
    if(root == NULL){
        root = new Node<T>(data);
        return root;
    }

    int choice;
    cout << "Enter 1 to insert at left else at 2:";
    cin >> choice;

    if(choice == 1){
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }

    return root;
}

void line(){
    cout << "\n";

    for(int i = 0; i < 60; i++){
        cout << '=';
    }

    cout << "\n\n";
}

template<class T>
void inorderTraversal(Node<T>* root){
    if(root == NULL){
        return;
    }

    inorderTraversal(root->left); // traverse left
    cout << ' ' << root->data; // print current
    inorderTraversal(root->right); // traverse right
}

template <class T>
void preorderTraversal(Node<T> *root){
    if (root == NULL){
        return;
    }

    cout << ' ' << root->data;      // print current
    preorderTraversal(root->left);  // traverse left
    preorderTraversal(root->right); // traverse right
}

template <class T>
void postorderTraversal(Node<T> *root){
    if (root == NULL){
        return;
    }

    postorderTraversal(root->left);  // traverse left
    postorderTraversal(root->right); // traverse right
    cout << ' ' << root->data;       // print current
}

template<class T>
void levelOrderTraversal(Node<T>* root){
    if(root == NULL){
        return;
    }

    queue<Node<T>*> q;
    q.push(root);

    while(!q.empty()){
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

int main(){
    Node<int>* root = NULL;

   int tests;
   cout << "Enter number of test cases: ";
   cin >> tests;

   while(tests--){
       int data;
       cout << "Enter data to insert: ";
       cin >> data;
       root = insert(root, data);
   }

   line();
   cout << "Preorder Traversal:\n\t";
   preorderTraversal(root);

   line();
   cout << "Inorder Traversal:\n\t";
   inorderTraversal(root);

   line();
   cout << "Postorder Traversal:\n\t";
   postorderTraversal(root);

   line();
   cout << "Level Order Traversal:\n\t";
   levelOrderTraversal(root);

   return 0;
}