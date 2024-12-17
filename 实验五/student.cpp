//
// Created by perci on 24-12-17.
//
#include<iostream>
#include<cstring>
#include"student.h"
using namespace std;

Student::Student() {
    num = 0;
    strcpy(name, "empty");
    sex='u';
}
void Student::setValue(int num,const char *name, char sex) {
    this->num = num;
    strncpy(this->name, name,19);
    this->sex = sex;
}
Student::Student(int num,const char *name, char sex) {
    setValue(num, name, sex);
}
void Student::display() {
    cout<<"num: "<<num<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"sex: "<<sex<<endl;
}