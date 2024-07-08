#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Bird{
    public:
    int age, weight;
    int nol;
    string color;
    void eat(){
        cout<<"Bird is eating"<<endl;
    }
    void fly(){
        cout<<"Bird is flying"<<endl;
    }
};

class Sparrow:public Bird{
    public:
    Sparrow(int age, int weight, string color, int nol){
        this->age=age;
        this->weight=weight;
        this->color=color;
        this->nol=nol;
    }

    int getNOL(){
        return this->nol;
    }
    void grassing(){
        cout<<"Sparrow is grassing"<<endl;
    }
};

class Peigon:public Bird{
    public:
    void guttering(){
        cout<<"Sparrow is guttering"<<endl;
    }
};

class Parrot:public Bird{
    public:
    void guttering(){
        cout<<"Parrot is speaking"<<endl;
    }
};

int main(){
    Sparrow s(1,1,"Brown",2);
    cout<<s.color<<endl;
    s.eat();
    s.grassing();
    Peigon p;
    p.eat();
    p.guttering();
    return 0;
}