/*1. Create a structure TIME containing hour, minutes and seconds as its
member. Write a program that uses this structure to input start time and stop
time. Pass structures to a function by reference that calculates the sum and
difference of start and stop time. Display the sum and difference from calling
function.*/

/*#include <stdio.h>

struct TIME {
    int hour;
    int minutes;
    int seconds;
};

void difference(struct TIME start, struct TIME stop, struct TIME *diff);
void sum(struct TIME start, struct TIME stop, struct TIME *add);

int main() {
    struct TIME startTime, stopTime, diffTime, sumTime;

    printf("Enter start time (HH MM SS): ");
    scanf("%d %d %d", &startTime.hour, &startTime.minutes, &startTime.seconds);
    
    printf("Enter stop time (HH MM SS): ");
    scanf("%d %d %d", &stopTime.hour, &stopTime.minutes, &stopTime.seconds);

    difference(startTime, stopTime, &diffTime);
    sum(startTime, stopTime, &sumTime);
    
    printf("Time Difference: %02d:%02d:%02d\n", diffTime.hour, diffTime.minutes, diffTime.seconds);
    printf("Time Sum: %02d:%02d:%02d\n", sumTime.hour, sumTime.minutes, sumTime.seconds);
    
    return 0;
}

void difference(struct TIME start, struct TIME stop, struct TIME *diff) {
    if (stop.seconds < start.seconds) {
        stop.minutes--;
        stop.seconds += 60;
    }
    diff->seconds = stop.seconds - start.seconds;

    if (stop.minutes < start.minutes) {
        stop.hour--;
        stop.minutes += 60;
    }
    diff->minutes = stop.minutes - start.minutes;

    diff->hour = stop.hour - start.hour;

    if (diff->hour < 0) {
        diff->hour += 24;
    }
}

void sum(struct TIME start, struct TIME stop, struct TIME *add) {
    add->seconds = start.seconds + stop.seconds;
    add->minutes = start.minutes + stop.minutes;
    add->hour = start.hour + stop.hour;

    if (add->seconds >= 60) {
        add->seconds -= 60;
        add->minutes++;
    }

    if (add->minutes >= 60) {
        add->minutes -= 60;
        add->hour++;
    }

    if (add->hour >= 24) {
        add->hour -= 24;
    }
}*/


/*2. Create a structure called "student" with data member name, address and
id.pass structure to function and sort the information of student on the basis
of alphabetical order of "name" and display the result in main() function.*/
/*#include <stdio.h>
#include <string.h>
struct student {
    char name[50];
    char address[100];
    int id;
};
void sortStudents(struct student s[], int n) {
    struct student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name); 
        printf("Address: ");
        scanf(" %[^\n]", s[i].address);
        printf("ID: ");
        scanf("%d", &s[i].id);
    }
    sortStudents(s, n);
    printf("\nSorted Student Details (Alphabetical Order by Name):\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Address: %s\n", s[i].address);
        printf("ID: %d\n", s[i].id);
    }

    return 0;
}*/

/*3. Write a program in c to create a structure named "Student" having members
Roll, Name, Address and Marks. Use this structure to read the information of
48 students in a class and display the information of, only those students
whose marks is between 50 and 70.*/

/*#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    char address[100];
    float marks;
};

int main() {
    struct Student students[48];

    for (int i = 0; i < 48; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        getchar();
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Address: ");
        fgets(students[i].address, sizeof(students[i].address), stdin);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar();
    }

    printf("\nStudents with marks between 50 and 70:\n");
    for (int i = 0; i < 48; i++) {
        if (students[i].marks >= 50 && students[i].marks <= 70) {
            printf("\nRoll: %d\n", students[i].roll);
            printf("Name: %s", students[i].name);
            printf("Address: %s", students[i].address);
            printf("Marks: %.2f\n", students[i].marks);
        }
    }

    return 0;
}
*/


/*4. Write a program that reads name, roll numbers, program and marks obtained
in five subjects by students until the user enters 'e' and display the student
detail and total marks obtained by each student.*/

/*#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    char program[50];
    float marks[5];
    float totalMarks;
};

int main() {
    struct Student student;
    char continueInput = 'y';

    while (continueInput != 'e') {
        student.totalMarks = 0;

        printf("Enter student's name: ");
        fgets(student.name, sizeof(student.name), stdin);
        printf("Enter roll number: ");
        scanf("%d", &student.roll);
        getchar();
        printf("Enter program: ");
        fgets(student.program, sizeof(student.program), stdin);

        printf("Enter marks for 5 subjects: \n");
        for (int i = 0; i < 5; i++) {
            printf("Subject %d: ", i + 1);
            scanf("%f", &student.marks[i]);
            student.totalMarks += student.marks[i];
        }
        getchar();

        printf("\nStudent Details:\n");
        printf("Name: %s", student.name);
        printf("Roll Number: %d\n", student.roll);
        printf("Program: %s", student.program);
        printf("Marks: ");
        for (int i = 0; i < 5; i++) {
            printf("%.2f ", student.marks[i]);
        }
        printf("\nTotal Marks: %.2f\n", student.totalMarks);

        printf("\nEnter 'e' to exit or any other key to enter another student's data: ");
        continueInput = getchar();
        getchar();
    }

    return 0;
}
*/


/*5. Write a program to define a structure named Person with Name, address,
salary as its member. Enter values for five persons. Pass the structure to a
function which increases the salary by 15% each. Display the updated
information in the main() function.*/

/*#include <stdio.h>

struct Person {
    char name[50];
    char address[100];
    float salary;
};

void increaseSalary(struct Person *p) {
    p->salary += p->salary * 0.15;
}

int main() {
    struct Person persons[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details of person %d:\n", i + 1);
        printf("Name: ");
        fgets(persons[i].name, sizeof(persons[i].name), stdin);
        printf("Address: ");
        fgets(persons[i].address, sizeof(persons[i].address), stdin);
        printf("Salary: ");
        scanf("%f", &persons[i].salary);
        getchar();
    }

    for (int i = 0; i < 5; i++) {
        increaseSalary(&persons[i]);
    }

    printf("\nUpdated details after salary increase:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nPerson %d:\n", i + 1);
        printf("Name: %s", persons[i].name);
        printf("Address: %s", persons[i].address);
        printf("Updated Salary: %.2f\n", persons[i].salary);
    }

    return 0;
}
*/


/*6. WAP in c to add two distance given in km and meter using structure.*/

/*#include <stdio.h>

struct Distance {
    int km;
    int meter;
};

void addDistances(struct Distance d1, struct Distance d2, struct Distance *result) {
    result->meter = d1.meter + d2.meter;
    result->km = d1.km + d2.km + result->meter / 1000;
    result->meter = result->meter % 1000;
}

int main() {
    struct Distance d1, d2, result;

    printf("Enter first distance (km and meters):\n");
    printf("Kilometers: ");
    scanf("%d", &d1.km);
    printf("Meters: ");
    scanf("%d", &d1.meter);

    printf("Enter second distance (km and meters):\n");
    printf("Kilometers: ");
    scanf("%d", &d2.km);
    printf("Meters: ");
    scanf("%d", &d2.meter);

    addDistances(d1, d2, &result);

    printf("\nThe sum of the two distances is:\n");
    printf("Distance = %d km %d meters\n", result.km, result.meter);

    return 0;
}
*/


/*7. Create a structure to hold any complex number x+iy. Write a program that
uses the structure to read two complex numbers and display a third complex
number which is the multiplication of the entered complex numbers*/

/*#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

int main() {
    struct Complex c1, c2, result;

    printf("Enter the first complex number (a + bi):\n");
    printf("Real part: ");
    scanf("%f", &c1.real);
    printf("Imaginary part: ");
    scanf("%f", &c1.imag);

    printf("Enter the second complex number (a + bi):\n");
    printf("Real part: ");
    scanf("%f", &c2.real);
    printf("Imaginary part: ");
    scanf("%f", &c2.imag);

    result = multiplyComplex(c1, c2);

    printf("\nMultiplication of the two complex numbers:\n");
    printf("Result = %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
*/

/*8. Write a program to read structure "college" having name, estDate and
location where estDate is an another structure having day, month and year
as members. Display the records of 10 colleges. */

/*#include <stdio.h>

struct EstDate {
    int day;
    int month;
    int year;
};

struct College {
    char name[100];
    struct EstDate estDate;
    char location[100];
};

int main() {
    struct College colleges[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter details for college %d:\n", i + 1);
        printf("Name: ");
        fgets(colleges[i].name, sizeof(colleges[i].name), stdin);
        printf("Establishment Date (DD MM YYYY): ");
        scanf("%d %d %d", &colleges[i].estDate.day, &colleges[i].estDate.month, &colleges[i].estDate.year);
        getchar();  // to clear the newline left by scanf
        printf("Location: ");
        fgets(colleges[i].location, sizeof(colleges[i].location), stdin);
    }

    printf("\nDisplaying College Records:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nCollege %d Details:\n", i + 1);
        printf("Name: %s", colleges[i].name);
        printf("Establishment Date: %02d-%02d-%04d\n", colleges[i].estDate.day, colleges[i].estDate.month, colleges[i].estDate.year);
        printf("Location: %s", colleges[i].location);
    }

    return 0;
}
*/


/*9. Write a program to perform addition, subtraction, multiplication and division
of complex numbers. Make separate functions for each operation. 
*/

/*#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

struct Complex subtractComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

struct Complex divideComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    float denominator = c2.real * c2.real + c2.imag * c2.imag;
    if (denominator != 0) {
        result.real = (c1.real * c2.real + c1.imag * c2.imag) / denominator;
        result.imag = (c1.imag * c2.real - c1.real * c2.imag) / denominator;
    } else {
        printf("Division by zero is not possible.\n");
        result.real = result.imag = 0;  // Return zero in case of division by zero
    }
    return result;
}

void displayComplex(struct Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

int main() {
    struct Complex c1, c2, result;

    printf("Enter the first complex number (a + bi):\n");
    printf("Real part: ");
    scanf("%f", &c1.real);
    printf("Imaginary part: ");
    scanf("%f", &c1.imag);

    printf("Enter the second complex number (a + bi):\n");
    printf("Real part: ");
    scanf("%f", &c2.real);
    printf("Imaginary part: ");
    scanf("%f", &c2.imag);

    result = addComplex(c1, c2);
    printf("\nAddition: ");
    displayComplex(result);

    result = subtractComplex(c1, c2);
    printf("Subtraction: ");
    displayComplex(result);

    result = multiplyComplex(c1, c2);
    printf("Multiplication: ");
    displayComplex(result);

    result = divideComplex(c1, c2);
    printf("Division: ");
    displayComplex(result);

    return 0;
}
*/

/*10. Write a program to read the Heights of two students and display the
difference between their heights. Use feet and inches as members of a
structure to define height. 
*/

/*#include <stdio.h>

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

struct Height findDifference(struct Height h1, struct Height h2) {
    struct Height diff;
    int totalInches1 = (h1.feet * 12) + h1.inches;
    int totalInches2 = (h2.feet * 12) + h2.inches;

    int diffInches = totalInches1 - totalInches2;

    if (diffInches < 0) {
        diffInches = -diffInches;
    }

    diff.feet = diffInches / 12;
    diff.inches = diffInches % 12;

    return diff;
}

int main() {
    struct Height h1, h2, diff;

    printf("Enter the height of the first student:\n");
    h1 = readHeight();

    printf("Enter the height of the second student:\n");
    h2 = readHeight();

    diff = findDifference(h1, h2);

    printf("\nThe difference between the heights is: %d feet and %d inches.\n", diff.feet, diff.inches);

    return 0;
}
*/

