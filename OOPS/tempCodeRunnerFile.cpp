#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"Animal making sound"<<endl;
    }
    virtual ~Animal(){
        cout<<"~Animal dtor"<<endl;
    }
};

class Dog:public Animal{
    public:
    void sound() override{
        cout<<"Dog Barking"<<endl;
    }
    ~Dog(){
        cout<<"~DOG dtor"<<endl;
    }
};

class Cat:public Animal{
    public:
    void sound() override{
        cout<<"Cat Mewing"<<endl;
    }
    ~Cat(){
        cout<<"~Cat dtor"<<endl;
    }
};

class Parrot:public Animal{
    public:
    void sound() override{
        cout<<"Parrot mithu mithu"<<endl;
    }
    ~Parrot(){
        cout<<"~Parrot dtor"<<endl;
    }
};

void sound(Animal *animal){
    animal->sound();
}

int main(){
    Animal *animal=new Dog();
    sound(animal);
    delete animal;

    
    
    return 0;
}








