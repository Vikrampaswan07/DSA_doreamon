#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// It return root node of the created tree
Node* createTree(){
    cout<<"Enter the value: "<<endl;
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    // Step1: create Node
    Node* root = new Node(data);
    // Step2: Create left subTree
    cout<<"left of Node: "<<root->data<<endl;
    root->left = createTree();
    // Step3: Create right subTree
    cout<<"right of Node: "<<root->data<<endl;
    root->right = createTree();
    return root;
}

void preOrderTraversal(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    // N L R
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}

void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    // L
    inOrderTraversal(root->left);
    // N
    cout<<root->data<<" ";
    // R
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    // L
    postOrderTraversal(root->left);
    // R
    postOrderTraversal(root->right);
    // N
    cout<<root->data<<" ";
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    // asli traversal start krete h
    while(q.size() > 1){
        Node* front = q.front();
        q.pop();

        if(front == NULL){
            cout<<endl;
            q.push(NULL);
        }
        else{
            // valid node wala case
            cout<<front->data<<" ";

            if(front->left != NULL){
                q.push(front->left);
            }
            if(front->right != NULL){
                q.push(front->right);
            }
        }
    }
}

int main(){
    Node* root = createTree();
    // cout<<root->data<<endl;
    cout<<"Printing Preorder: ";
    preOrderTraversal(root);
    cout<<endl;

    cout<<"Printing Inorder: ";
    inOrderTraversal(root);
    cout<<endl;

    cout<<"Printing Postorder: ";
    postOrderTraversal(root);
    cout<<endl;

    cout<<"LevelOrderTraversal: "<<endl;
    levelOrderTraversal(root);
    cout<<endl;

    return 0;
}