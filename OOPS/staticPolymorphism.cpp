#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

double add(double a, double b){
    return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}
// fn overloading
class Vector{
    int x,y;
public:
    // Vector(int x, int y){
    //     this->x=x;
    //     this->y=y;
    // }
    Vector(int x, int y) : x(x),y(y) {}

    void operator+(const Vector &src){
        this->x = this->x + src.x;
        this->y = this->y + src.y;
    }
    void display(){
        cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
    }
};

int main(){
    // cout<<add(1,5)<<endl;
    // cout<<add(5.6, 4.5)<<endl;
    // cout<<add(1,2,3)<<endl;
    Vector v1(2,3);
    Vector v2(4,5);

    v1+v2;
    v1.display(); 
    return 0;
}
