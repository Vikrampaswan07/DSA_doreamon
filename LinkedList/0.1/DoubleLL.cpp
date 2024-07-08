#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(){
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp->data<<"->";
        temp = temp->next;
    }
}

int findLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int pos){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        int len = findLength(head);
        if(pos == 1){
            insertAtHead(head, tail, data);
        }
        else if(pos == len+1){
            insertAtTail(head, tail, data);
        }
        else{
            Node* newNode = new Node(data);
            Node* prevNode = NULL;
            Node* currNode = head;
            while(pos != 1){
                pos--;
                prevNode = currNode;
                currNode = currNode->next;
            }
            prevNode->next = newNode;
            newNode->prev = prevNode;
            newNode->next = currNode;
            currNode->prev = newNode;
        }
    }
}

void deleteNode(Node* &head, Node* &tail, int pos){
    if(head == NULL){
        cout<<"Cannot delete because LL is empty"<<endl;
        return;
    }

    if(head == tail){
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
        return;
    }
    int len = findLength(head);
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
        return;
    }
    else if(pos == len){
        Node* prevNode = tail->prev;
        prevNode->next = NULL;
        tail->prev = NULL;
        delete tail;
        tail = prevNode;
        return;
    }
    else{
        Node* prevNode = NULL;
        Node* currNode = head;
        while(pos != 1){
            pos--;
            prevNode = currNode;
            currNode = currNode->next;
        }
        Node* nextNode = currNode->next;

        prevNode->next = nextNode;
        currNode->prev = NULL;
        currNode->next = NULL;
        nextNode->prev = prevNode;
        return;
    }

}
int main(){

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    // print(head);
    cout<<endl;
    // insertAtTail(head, tail, 1000);

    insertAtPosition(head, tail, 27, 4);
    print(head);
    cout<<endl;
    deleteNode(head, tail, 1);
    print(head);


    return 0;
}