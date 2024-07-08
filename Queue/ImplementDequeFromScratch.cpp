#include<iostream>
using namespace std;

class Deque{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    Deque(int val){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push_back(int val){
        // Overflow
        // Empty case
        // Normal flow
        if((front == 0 && rear == size-1) || (rear == front-1)){
            cout<<"Overflow"<<endl;
        }
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = val;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = val;
        }
        else{
            rear++;
            arr[rear] = val;
        }
    }

    void push_front(int val){
        if((front == 0 && rear == size-1) || (rear == front-1)){
            cout<<"Overflow"<<endl;
        }
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[front] = val;
        }
        else if(front == 0 && rear != size-1){
            front = size-1;
            arr[front] = val;
        }
        else{
            front--;
            arr[front] = val;
        }
    }

    void pop_front(int val){
        // Underflow
        // Single element
        // circular nature
        // normal case
        if(front == -1 && rear == -1){
            cout<<"Underflow"<<endl;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            arr[front] = -1;
            front = 0;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }

    void pop_back(int val){
        if(front == -1 && rear == -1){
            cout<<"Underflow"<<endl;
        }
        else if(front == rear){
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        else if(rear == 0){
            arr[rear] = -1;
            rear = size -1;
        }
        else{
            arr[rear] = -1;
            rear--;
        }
    }
};
int main(){
    return 0;
}