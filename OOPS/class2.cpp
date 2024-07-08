#include<iostream>
using namespace std;

class Student{
public:
    int id;
    int age;
    bool present;
    string name;
    int nos;
    string gf;
    int *v;
    Student(int _id, int _age, bool _present, string _name, int _nos, string _gf){
        id = _id;
        age=_age;
        present=_present;
        name=_name;
        nos=_nos;
        gf=_gf;
        v=new int(10);
        cout<<"Student paremeterized ctor with gf"<<endl;
    }

    //copy stor
    Student(const Student &srcobj){
        cout<<"Student copy ctor called "<<endl;
        this->name = srcobj.name;
        this->age = srcobj.age;
        this->gf = srcobj.gf;
        this->nos = srcobj.nos;
        this->present = srcobj.present;
        this->id = srcobj.id;
    }

    // getter setter method
    string getGFName(){
        return this->gf;
    }

    void setGFName(string gf){
        this->gf=gf;
    }
    void study(){
        cout<<"studing"<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;
    }
    void bunk(){
        cout<<"bunking"<<endl;
    }

    ~Student(){
        cout<<"Student dtor called"<<endl;
        delete v;
    }

private:
    void gfchatting(){
        cout<<"chatting"<<endl;
    }
    void cheating(){
        cout<<"Cheating"<<endl;
    }
};

int main(){
    
    Student s1(1,12,1,"Chota Bheem",1,"CHUTKI");
    cout<<s1.name<<endl;
    s1.setGFName("Indumati");
    cout<<s1.getGFName()<<endl;
    // Student s2;

    return 0;
}


