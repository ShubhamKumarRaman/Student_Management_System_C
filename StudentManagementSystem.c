#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define FILENAME "students.dat"

struct Student{
    int id;
    char name[50];
    int age;
    float marks;
};

void addStudent();
void displayStudents();
void searchStudent();
void deleteStudent();
void updateStudent();

int main(){
    return 0;
}