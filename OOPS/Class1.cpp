#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    
public:
    int id;
    int age;
    bool present;
    string name;
    int nos;
    string gf;
    
    //ctor: Default ctor: assigns garbage value
    // Student(){
    //     cout<<"Student ctor called"<<endl;
    // }

    // Student(int id, int age, bool present, string name, int nos, string gf){
    //     this->id = id;
    //     this->age= age;
    //     this->present = present;
    //     this->name = name;
    //     this->nos = nos;
    //     this->gf = gf;
    //     cout<<"Student peremeterized ctor called"<<endl;
    // }
    
    //Paremetrized ctor
    Student(int _id, int _age, bool _present, string _name, int _nos, string _gfname){
        id=_id;
        age=_age;
        present= _present;
        name=_name;
        nos=_nos;
        gf=_gfname;
        cout<<"Student peremeterized ctor called"<<endl;
    }
    // Student(int _id, int _age, bool _present, string _name, int _nos){
    //     id=_id;
    //     age=_age;
    //     present= _present;
    //     name=_name;
    //     nos=_nos;
    //     cout<<"Student peremeterized ctor without gf called"<<endl;
    // }
    void study(){
        cout<<"studing"<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;
    }
    void bunk(){
        cout<<"bunking"<<endl;
    }
private:
    void gfchatting(){
        cout<<"chatting"<<endl;
    }
};

int main(){
    // Student s1;
    // s1.name="Goli";
    // s1.age=12;
    // s1.id=1;
    // s1.nos=5;
    // s1.present=0;

    Student s2(1,12,1,"Chota Bheem", 1, "Chutki");
    cout<<s2.present<<endl;
    Student s3(2,15,0,"Lokesh",5, "ASHA");
    cout<<s3.name<<endl;
    // s2.name="Chota Bheem";
    // s2.age=14;
    // s2.id=2;
    // s2.nos=6;
    // s2.present=0;
    Student *s4 = new Student(3, 34, 1, "VIKRAM",3, "Roshni");
    cout<< s4->name <<endl;
    cout<< (*s4).name <<endl;
    delete s4;
    
     

    return 0;
}