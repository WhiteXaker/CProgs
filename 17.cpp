#include <iostream>
using namespace std;

class Student{
private:
    char * name;
    char * famlilyName;
    char * age;
    char * phone;

public:
    Student(char * name, char * familyName, char * age, char * phone){
        this->name = name;
        this->famlilyName = familyName;
        this->age = age;
        this->phone = phone;
    }

    ~Student(){
        free(this->name);
        free(this->famlilyName);
        free(this->age);
        free(this->phone);
    }

    Student * read(){
        char name[100], familyName[100], age[100], phone[100];
        gets(name);
        gets(familyName);
        gets(age);
        gets(phone);
        Student * student = new Student(name, familyName, age, phone);
        return student;
    }

    Student * read(FILE * file){
        char name[100], familyName[100], age[100], phone[100];
        fgets(name, 100, file);
        fgets(familyName, 100, file);
        fgets(age, 100, file);
        fgets(phone, 100, file);
        Student * student = new Student(name, familyName, age, phone);
        return student;
    }

    void write(Student * student){
        cout << student->name << " " << student->famlilyName << " " << student->age << " " << student->phone << endl;
    }

    void write(Student * student, FILE * file){
        fprintf(file, "%s %s %s %s\n", student->name, student->famlilyName, student->age, student->phone);
    }

};