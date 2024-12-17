//
// Created by perci on 24-12-17.
//

#ifndef STUDENT_H
#define STUDENT_H
class Student {
public:
    Student();
    Student(int num,const char* name,char sex);
    void display();
    void setValue(int num,const char *name, char sex);
private:
    int num;
    char name[20];
    char sex;//"m" for male, "f" for female, "u" for unknown
};

#endif //STUDENT_H
