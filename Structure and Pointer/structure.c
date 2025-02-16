
/*1. Write a program that reads name, roll, program and marks obtained in five subjects by
students until the user enters „e‟ and displays the student detail and total marks obtained
by each student. */
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student {
    char name[100];
    int roll;
    char program[100];
    int marks[5]; 
    int totalmarks;
}s;

int CalTotalMarks(int marks[], int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += marks[i];
    }
    return total;
}

void inputDetails(struct student *s) {
    printf("\nEnter student name or (e) for exit :\n");
    scanf(" %[^\n]", s->name);
    if(strcmp(s->name, "e") == 0) { 
        exit(0);
    }
    printf("Enter Roll : \n");
    scanf("%d", &s->roll);
    printf("Enter program :\n");
    scanf(" %[^\n]", s->program);
    printf("Enter marks for 5 subjects : \n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s->marks[i]);
    }

    s->totalmarks = CalTotalMarks(s->marks, 5);
}

void displayStudentDetails(struct student s) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Program: %s\n", s.program);
    printf("Total Marks: %d\n", s.totalmarks);
    printf("---------------------------\n");
}

int main() {
    while(1) {
        inputDetails(&s);
        displayStudentDetails(s);
        char choice;
        printf("Do you want to enter another student? (y/n): ");
        scanf(" %c", &choice);
        if(choice == 'n' || choice == 'N') {
            break;
        }
    }
    return 0;
}
*/

/*Write a program to read structure “college” having name, estDate and location whereas
estDate is another structure having day, month and year as members. Display the records
of 10 colleges.*/

/*#include<stdio.h>
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


/*3. Write a program to read the heights of two students and display the difference between
their heights. Use feet and inches as members of a structure to define height.*/

/*#include <stdio.h>
#include <stdlib.h>

struct Height {
    int feet;
    int inches;
};

struct Height readHeight() {
    struct Height h;
    printf("Enter height (feet inches): ");
    scanf("%d %d", &h.feet, &h.inches);
    return h;
}

int convertToInches(struct Height h) {
    return (h.feet * 12) + h.inches;
}

struct Height convertToFeetAndInches(int totalInches) {
    struct Height h;
    h.feet = totalInches / 12;
    h.inches = totalInches % 12;
    return h;
}

int main() {
    struct Height student1, student2;
    printf("Enter the height of student 1:\n");
    student1 = readHeight();
    
    printf("Enter the height of student 2:\n");
    student2 = readHeight();
    
    int height1InInches = convertToInches(student1);
    int height2InInches = convertToInches(student2);
    
    int differenceInInches = abs(height1InInches - height2InInches);
    struct Height difference = convertToFeetAndInches(differenceInInches);
    
    printf("\nThe difference between the heights is: %d feet %d inches\n", difference.feet, difference.inches);
    
    return 0;
}*/


/*4. Create an array of structures named Employee with name and salary as structure
members and the array of structures is passed to a function which sorts in ascending order
based on salary and display the sorted array from main.*/

/*#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    float salary;
};

void sortEmployeesBySalary(struct Employee emp[], int n) {
    struct Employee temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (emp[j].salary > emp[j + 1].salary) {
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }
}

void displayEmployees(struct Employee emp[], int n) {
    printf("\nSorted Employee Details (Ascending Order of Salary):\n");
    printf("-----------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Salary: %.2f\n", emp[i].name, emp[i].salary);
    }
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    sortEmployeesBySalary(employees, n);
    displayEmployees(employees, n);

    return 0;
}
*/