#include<iostream>
#include<queue>
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

// it returns root node of the created tree
Node* createTree(){
    cout<<"Enter the value for Node: "<<endl;
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    // Step1: create node
    Node* root = new Node(data);
    // Step2: create left subtree
    cout<<"Left of node: "<< root->data<<endl;
    root->left = createTree();
    // step3: create right subtree
    cout<<"Right of node: "<< root->data<<endl;
    root->right = createTree();
    return root;
}

void preOrderTraversal(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    // N L R
    // N
    cout<<root->data<<" ";
    // L
    preOrderTraversal(root->left);
    // R
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    // L N R
    // base case
    if(root == NULL){
        return;
    }
    // L
    inOrderTraversal(root->left);
    // N
    cout<< root->data << " ";
    // R
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    // L R N
    // base case
    if(root == NULL){
        return;
    }
    // L
    postOrderTraversal(root->left);
    // R
    postOrderTraversal(root->right);
    // N
    cout<< root->data <<" ";
}

void levelOrderTraversal(Node* root){
    queue<Node* >q;
    q.push(root);
    q.push(NULL);


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

    cout<<"Printing PreOrder: ";
    preOrderTraversal(root);
    cout<<endl;

    cout<<"Printing InOrder: ";
    inOrderTraversal(root);
    cout<<endl;

    cout<<"Printing PostOrder: ";
    postOrderTraversal(root);
    cout<<endl;

    cout<<"Level Order: ";
    levelOrderTraversal(root);
    cout<<endl;


}

