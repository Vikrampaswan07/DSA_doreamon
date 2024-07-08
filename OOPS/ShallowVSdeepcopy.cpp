#include<iostream>
using namespace std;


class abc{
    public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    // Shallow copy
    // abc(const abc &obj){
    //     x=obj.x;
    //     y=obj.y;
    // }

    //DEEP COPY constructor
    abc(const abc &obj){
        x=obj.x;
        y=new int(*obj.y);
    }

    void print() const{
        printf("X:%d\nPTR Y:%p\nContent of Y (*y):%d\n\n", x,x,*y);
    }
    ~abc(){
        delete y;
    }
};

int main(){
    abc a(1,2);
    a.print();

    abc b=a;
    b.print();

    abc a(1,2);
    a.print();

    
    return 0;
}