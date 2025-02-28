#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "students.dat"

struct Student
{
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

int main()
{
    int choice;
    while (1)
    {
        pirntf("\nStudent Management System\n");
        pritnf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Update Student\n");
        printf("6. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            deleteStudent();
            break;
        case 5:
            updateStudent();
            break;
        case 6:
            exit(0);
            break;

        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }
    }
    return 0;
}

// Add Student
void addStudent()
{
    FILE *fp = fopen(FILENAME, "ab");
    if (!fp)
    {
        printf("Error opening file!\n");
        return;
    }
    struct Student s;
    pritnf("\nEnter ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf("%[^\n]", s.name);
    printf("Enter Age: ");
    scanf("%d", &s.age);
    printf("Enter Marks: ");
    scanf("%d", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
    printf("Student's record added sucessfully!\n");
}