#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> q;
    q.push(5);
    cout<<"Size of queue: "<<q.size()<<endl;
    q.pop();
    cout<<"Size of queue: "<<q.size()<<endl;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    return 0;
}