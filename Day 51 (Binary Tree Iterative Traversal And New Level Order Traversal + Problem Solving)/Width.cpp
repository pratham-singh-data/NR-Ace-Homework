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
int getWidth(Node<T>* root){
    int width = 0;
    queue<Node<T>*> q;
    q.push(root);

    while(! q.empty()){
        int n = q.size();

        if(width < n){
            width = n;
        }

        while(n--){
            Node<T> *temp = q.front();
            q.pop();
            
            if(temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }
    }

    return width;
}

int main(){
    Node<int>* root = NULL;
    int nodes;
    cin >> nodes;

    while(nodes--){
        int data;
        cin >> data;
        addNode(root, data);
    }

    cout << "\n\ninorder Traversal:\n\t";
    inorder(root);

    cout << "\n\nWidth is: " << getWidth(root) << '\n';

    return 0;
}