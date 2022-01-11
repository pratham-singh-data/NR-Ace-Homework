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
    cin >> choice;

    if(choice == 1){
        addNode(root->left, data);
    }
    else{
        addNode(root->right, data);
    }
}

void line(){
    cout << "\n\n";

    for(int i = 0; i < 60; i++){
        cout << '=';
    }

    cout << "\n\n";
}

template<class T>
void inorder(Node<T>* root){
    stack<pair<Node<T>*, int>> s;
    s.push({root, 0});

    while(! s.empty()){
        if(s.top().first == NULL){
            s.pop();
            continue;
        }

        switch(s.top().second++){
            case 0: s.push({s.top().first->left, 0});
                    break;
            
            case 1: cout << s.top().first->data << ' ';
                    break;

            case 2: s.push({s.top().first->right, 0});
                    break;

            default: s.pop();
        }
    }
}

template<class T>
void postorder(Node<T>* root){
    stack<pair<Node<T>*, int>> s;
    s.push({root, 0});

    while(! s.empty()){
        if(s.top().first == NULL){
            s.pop();
            continue;
        }

        switch(s.top().second++){
            case 0: s.push({s.top().first->left, 0});
                    break;

            case 1: s.push({s.top().first->right, 0});
                    break;
            
            case 2: cout << s.top().first->data << ' ';
                    break;

            default: s.pop();
        }
    }
}

template<class T>
void preorder(Node<T>* root){
    stack<pair<Node<T>*, int>> s;
    s.push({root, 0});

    while(! s.empty()){
        if(s.top().first == NULL){
            s.pop();
            continue;
        }

        switch(s.top().second++){
            case 0: cout << s.top().first->data << ' ';
                    break;

            case 1: s.push({s.top().first->left, 0});
                    break;

            case 2: s.push({s.top().first->right, 0});
                    break;

            default: s.pop();
        }
    }
}

template<class T>
void levelOrder(Node<T>* root){
    queue<Node<T>*> q;
    q.push(root);
    int level = 1;

    while(! q.empty()){
        int n = q.size();
        cout << "Level " << level << " : ";

        while(n--){
            Node<T>* temp = q.front();
            q.pop();
            cout << temp->data << ' '; 

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }

        cout << '\n';
        level++;
    }
}

int main(){
    int nodes;
    cin >> nodes;
    Node<int>* root; 

    while(nodes--){
        int data;
        cin >> data;
        addNode(root, data);
    }

    line();
    cout << "Inorder Traversal:\n\t";
    inorder(root);

    line();
    cout << "Postorder Traversal:\n\t";
    postorder(root);

    line();
    cout << "Preorder Traversal:\n\t";
    preorder(root);

    line();
    cout << "Level Order Traversal:\n";
    levelOrder(root);
}