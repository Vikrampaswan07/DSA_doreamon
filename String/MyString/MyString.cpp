#include "MyString.h"
#include<cstring> // strcpy

// definations of all the functions declated in MyString.h
MyString::MyString(){
    data = new char[1];
    length = 0;
    data[0] = '\0';
}


// param ctor
MyString::MyString(const char *str){
    data = new char[strlen(str) + 1];
    length = strlen(str);
    strcpy(data, str);
}


MyString::MyString(const MyString &other){
    data = new char[other.length +1];
    length = other.length;
    strcpy(data, other.data);
}

MyString::MyString(){
    delete[] data;
}

int MyString::size() const{
    return length;
}
    
bool MyString::empty() const{
    return length == 0;
}

const char*MyString::c_str() const{
    return data;
}

std::ostream &operator<<(std::ostream &os, const MyString &str){
    os << str.c_str();
    return os;
}

char &MyString::operator[](int index){
    if(index >= length){
        return '\0';
    }
    return data[index]
}