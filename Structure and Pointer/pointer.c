/*1. Write a program to calculate the sum and average of integer numbers between M and N
using a pointer.*/
/*#include <stdio.h>

void calculateSumAndAverage(int M, int N, int *sum, float *average) {
    int totalNumbers = 0;
    *sum = 0;

    for (int i = M; i <= N; i++) {
        *sum += i;
        totalNumbers++;
    }

    *average = (float)(*sum) / totalNumbers;
}

int main() {
    int M, N, sum;
    float average;

    printf("Enter the starting number (M): ");
    scanf("%d", &M);
    printf("Enter the ending number (N): ");
    scanf("%d", &N);

    calculateSumAndAverage(M, N, &sum, &average);

    printf("\nSum of numbers between %d and %d: %d\n", M, N, sum);
    printf("Average of numbers between %d and %d: %.2f\n", M, N, average);

    return 0;
}*/

/*2. WAP to input and display the details of n number of students entered by the user by
passing structure by reference to the function.*/
/*#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int roll;
    char program[100];
};

void inputDetails(struct Student *s) {
    printf("\nEnter student name: ");
    scanf(" %[^\n]", s->name);
    printf("Enter Roll Number: ");
    scanf("%d", &s->roll);
    printf("Enter Program: ");
    scanf(" %[^\n]", s->program);
}

void displayDetails(struct Student *s) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->roll);
    printf("Program: %s\n", s->program);
    printf("---------------------------\n");
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student *students = (struct Student*)malloc(n * sizeof(struct Student));
    
    if (students == NULL) {
        printf("Memory allocation failed");
        return -1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEntering details for student %d:\n", i + 1);
        inputDetails(&students[i]);
    }

    printf("\nDisplaying student details:\n");
    for (int i = 0; i < n; i++) {
        displayDetails(&students[i]);
    }

    free(students);

    return 0;
}
*/


/*3. Write a program to calculate the sum and average of integer numbers between M and N
using the concept of array and pointer.*/
#include <stdio.h>

void calculateSumAndAverage(int *arr, int n, int *sum, float *avg) {
    *sum = 0;
    for (int i = 0; i < n; i++) {
        *sum += arr[i];
    }
    *avg = (float)(*sum) / n;
}

int main() {
    int M, N;
    printf("Enter the value of M: ");
    scanf("%d", &M);
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int size = N - M + 1;
    int arr[size];

    for (int i = 0; i < size; i++) {
        arr[i] = M + i;
    }

    int sum;
    float avg;
    calculateSumAndAverage(arr, size, &sum, &avg);

    printf("Sum of integers between %d and %d: %d\n", M, N, sum);
    printf("Average of integers between %d and %d: %.2f\n", M, N, avg);

    return 0;
}
