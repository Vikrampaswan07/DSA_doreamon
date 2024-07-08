#ifndef MYSTRING_H
#define MYSTRING_H

#include<iostream>

class MyString{
private:
    char *data;
    int length;
public:
    // default ctor
    MyString();

    // param ctor
    MyString(const char *str);

    //  Copy ctor
    MyString(const MyString &other);

    ~MyString();

    int size() const;

    bool empty() const;

    const char *c_str() const;

    char &operator[](int index);

    // overload insertion operator << for easy output
    friend std::ostream &operator<<(std::ostream &os, const MyString &str);
};

#endif //