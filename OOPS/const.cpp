#include<iostream>
using namespace std;

class abc{
    int x;
    int *y;
    const int z;
public:

    // abc(int _x, int _y, int _z = 0){
    //     x=_x;
    //     y=new int(_y);
    //     z=_z;
    // }

    // initilation list
    abc(int _x, int _y, int _z=0):x(_x),y(new int (_y)),z(_z){
        cout<<"in init list"<<endl;
    }


    int getX() const{
        return x;
    }
    void setX(int _val){
        x= _val;
    }
    int getY() const{
        return *y;
    }
    void setY(int _val){
        *y = _val;
    }
    int getZ() const{
        return z;
    }
};

void printABC(const abc &a){
    cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ()<<endl;
}

int main(){
    abc a(1,2,3);
    printABC(a);
    return 0;
}
int main2(){
    // const int *a = new int(2);
    // // *a = 2;
    // cout<<*a<<endl;
    // int b=5;
    // a=&b;
    // cout<<*a<<endl;

    // // 2.const with pointers
    // const int *a=new int(2);
    // int const *a=new int(2);
    // cout<<*a<<endl;
    // int b=5;
    // a=&b;
    // cout<<*a<<endl;

    // constant pointer but non-constant data
    // int *const a = new int(2);
    // cout<<*a<<endl;
    // *a = 20;
    // cout<<*a<<endl;
    // int b=50;

    // // constant pointer, constant data
    // const int *const a = new int(10);
    // cout<<*a<<endl;
    // // Error
    // // *a = 50;
    // // int b=30;
    // // a=&b;
    
    return 0;
}