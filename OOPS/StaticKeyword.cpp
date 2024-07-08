#include<bits/stdc++.h>
using namespace std;

class abc{
    public:
    static int x,y;
    static void print(){
        cout<<x<<" "<<y<<endl;
    }
};

int abc::x;
int abc::y;

int main(){
    abc obj1;
    abc::x=1;
    abc::y=2;
    abc::print();
    abc obj2;
    abc::x=10;
    abc::y=20;
    abc::print();
    abc::print();
    return 0;
}