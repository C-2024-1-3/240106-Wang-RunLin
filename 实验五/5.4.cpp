#include<iostream>
using namespace std;

class Grade {
private:
    int num;
    int grade;
public:
    Grade(int num, int grade) {
        this->num = num;
        this->grade = grade;
    }
    void showGrade() const {
        cout << "Student number: " << this->num << endl;
        cout << "Grade: " << this->grade << endl;
    }
    friend int max(Grade*);
};

int main() {
    Grade student[5]={
    Grade(1, 10),
    Grade(2, 20),
    Grade(3, 30),
    Grade(4, 40),
    Grade(5, 50)};
    cout<<"Max grade is from No."<<max(student);
    return 0;
}

int max(Grade* grade) {
    int temp=0,result=0;
    for(int i=0;i<5;i++) {
        if(grade[i].grade > temp) {
            temp = grade[i].grade;
            result = i+1;
        }
    }
    return result;
}