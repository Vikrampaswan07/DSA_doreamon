#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, Node* &tail, int data){     // Always insert at pass by reference
    if(head == NULL){
        // empty LL

        // step1: create new node
        Node* newNode = new Node(data);
        // step2 : updata head
        head = newNode;
        tail = newNode;
    }
    else{
        // create a new node
        Node* newNode = new Node(data);
        // attach new node to head node
        newNode -> next = head;
        // updated head
        head = newNode;
    }

}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head == NULL){
        // empty LL
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void printLL(Node* head) {
    Node* temp = head;
    int cnt=0;

    while(temp != NULL){
        cnt++;
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<endl;
    cout<<"No. of Nodes = ";
    cout<<cnt<<endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtTail(head, tail, 50);

    printLL(head);
}