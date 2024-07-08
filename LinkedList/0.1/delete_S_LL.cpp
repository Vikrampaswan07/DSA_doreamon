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

    ~Node(){
        cout<<"Dtor called for: "<< this->data <<endl;
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

void deleteNode(Node* &head, Node* &tail, int position){
    if(head == NULL){
        cout<< "Cannot delete, coz LL is empty " << endl;
        return;
    }

    if(head == tail){
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }
    int len = getLength(head);

    if(position == 1){
        // first node delete
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else if(position == len){
        // Last node ko deletekardo
        Node* prev = head;
        while(prev->next != tail){
            prev = prev->next;
        }
        prev->next = NULL;

        delete tail;

        tail = prev;

    }
    else{
        // middle me
        Node* prev = NULL;
        Node* curr = head;
        while(position != 1){
            position--;
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        curr->next = NULL;
        delete curr;
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    printLL(head);
    cout<<endl;

    deleteNode(head, tail, 3);
    printLL(head);
    
    return 0;
}
