/*
Question:1
Write a C program that performs the following tasks:
Inputs the name, roll number, and marks in 5 subjects for 10 students.
Calculates the average marks for each student.
Prints the details of students whose average marks are above 80.
*/
#include <stdio.h>
struct student {
    char name[50];
    int roll;
    int marks[5];
    float avg;
} s[2];
void inputFunction() {
    int i, j;
    for (i = 0; i < 2; i++) {
        int total = 0, count = 0;
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]", s[i].name);
        printf("Enter Roll Number of student %d: ", i + 1);
        scanf("%d", &s[i].roll);
        printf("Enter the marks of 5 subjects:\n");
        for (j = 0; j < 5; j++) {
            printf("Enter the marks of Subject %d: ", j + 1);
            scanf("%d", &s[i].marks[j]);
            total += s[i].marks[j];
            count++;
        }
        s[i].avg = (float) total / count;
    }
}
void outputFunction() {
    int i, j;
    printf("\n.......................................\n");
    printf("\nOutput\n");
    printf("\n.......................................\n");
    for (i = 0; i < 2; i++) {
        if (s[i].avg > 80) {
            printf("Name: %s\n", s[i].name);
            printf("Roll No: %d\n", s[i].roll);
            printf("Average Marks: %.2f\n", s[i].avg);
            printf("Marks: ");
            for (j = 0; j < 5; j++) {
                printf("%d ", s[i].marks[j]);
            }
            printf("\n");
        }
    }
}
int main() {
    inputFunction();
    outputFunction();
    return 0;
}



/*Write a program to read structure “college” having name, estDate and location whereas
estDate is another structure having day, month and year as members. Display the records
of 10 colleges.*/
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct estDate {
    int day;
    int month;
    int year;
} e;

struct college {
    char name[100];
    struct estDate e;
    char location[100];
} c[10];

void inputdetails(struct college *c) {
    printf("\nEnter college Name: ");
    scanf(" %[^\n]", c->name);
    printf("\nEnter Establishment Date (DD MM YYYY): ");
    scanf("%d %d %d", &c->e.day, &c->e.month, &c->e.year);
    printf("\nCollege Location: ");
    scanf(" %[^\n]", c->location);
    printf("---------------------------\n");
}

void outputdetails(struct college c) {
    printf("\nCollege Name: %s\n", c.name);
    printf("Established Date: %02d/%02d/%04d\n", c.e.day, c.e.month, c.e.year);
    printf("Location: %s\n", c.location);
    printf("---------------------------\n");
}

int main() {
    printf("Enter details for 2 colleges:\n");
    for (int i = 0; i < 2; i++) {
        printf("\nCollege %d:\n", i + 1);
        inputdetails(&c[i]);
    }

    printf("\nDisplaying College Records:\n");
    for (int i = 0; i < 2; i++) {
        outputdetails(c[i]);
    } 
    return 0;
}*/