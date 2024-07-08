#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Default ctor
    Node(){
        cout<<"I am default ctor"<<endl;
        this->next=NULL;
    }

    // Parametric ctor
    Node(int data){
        cout<<"I am inside parametric ctor"<<endl;
        this->data=data;
        this->next=NULL;
    }
};

int getLength(Node* head){
    Node* temp = head;
    int count=0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void printLL(Node* head) {
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<endl;
    
}

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
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
    
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){

    int length = getLength(head);

    

    if(position <= 1){
        insertAtHead(head, tail, data);
    }
    else if(position > length){
        insertAtTail(head, tail, data);
    }
    else{
        // insert at middle of LL

        // step1: create a node
        Node* newNode = new Node(data);
        // step2: traverse prev // curr to position
        Node* prev = NULL;
        Node* curr = head;
        while(position != 1){
            prev = curr;
            curr = curr->next;
            position--;
        }
        // step3: attach prev to new node
        prev->next = newNode;
        // step4: attach newNode to curr
        newNode->next = curr;
    }

}

int main(){

    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* forth = new Node(40);
    // Node* fifth = new Node(50);

    // first->next = second;
    // second->next = third;
    // third->next = forth;
    // forth->next = fifth;
    // // Linked list created

    // Node* head = first;
    // cout<< "Printed the entire LL"<<endl;
    // printLL(head);

    // Node* tail = fifth;
    // cout<<endl<<"New Linked List "<<endl;
    // insertAtHead(head, tail, 500);
    // printLL(head);

    // insertAtTail(head, tail, 200);
    // printLL(head);


    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 50);
    printLL(head);

    insertAtPosition(head, tail, 5, 51);
    printLL(head);
    return 0;
}