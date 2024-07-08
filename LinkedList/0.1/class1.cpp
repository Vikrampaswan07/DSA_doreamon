#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Default ctor
    Node() {
        cout<<"I am inside default ctor"<<endl;
        this->next = NULL;
    }

    // Parametric ctor
    Node(int data){
        cout<<"I am inside parametric constructor"<<endl;
        this-> data = data;
        this-> next = NULL;
    }
};

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

int getLength(Node* head){
    Node* temp = head;
    int count=0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int main(){
    
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    // Linked list created

    Node* head = first;
    cout<< "Printed the entire LL"<<endl;
    printLL(head);

    cout<<getLength(head)<<endl;
    return 0;
}



