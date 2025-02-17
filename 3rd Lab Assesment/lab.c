/*Write a program to pass an araay to a function and sort it in ascending order
a. Input a 1D array with N numbers from the main() function, pass the array to the function Sort(), sort it in ascending order, and display the sordted 1D array using pointers from Sort().
b. Compute Sum as: Sum=sum of all odd position elements, i.e Sum=a[1]+a[3]+a[5]+..... and display its value.
c. Pass the value of M to the function StrS() and in the StrS() function do the following
i. Create a structure "Colleges" with the following members: Name (string), Address (string), No_of_students(integer)
ii. Read the details of M colleges
iii. Display the Details of the Colleges that have more than 249 students and are located inside Lalitpur district, using the concept of an array of structure
*/
#include <stdio.h>
#include <string.h>

#define MAX 100

void Sort(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (*(arr+j) > *(arr+j+1)) {
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}


int ComputeSum(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i += 2) {
        sum += *(arr+i);
    }
    return sum;
}


struct College {
    char name[50];
    char address[50];
    int no_of_students;
};


void StrS(int m) {
    struct College colleges[MAX];
    for (int i = 0; i < m; i++) {
        printf("Enter details for college %d:\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]%*c", colleges[i].name);
        printf("Address: ");
        scanf(" %[^\n]%*c", colleges[i].address);
        printf("Number of students: ");
        scanf("%d", &colleges[i].no_of_students);
    }
    
    printf("\nDetails of colleges with more than 249 students in Lalitpur district:\n");
    for (int i = 0; i < m; i++) {
        if (colleges[i].no_of_students > 249 && strstr(colleges[i].address, "Lalitpur")) {
            printf("Name: %s\n", colleges[i].name);
            printf("Address: %s\n", colleges[i].address);
            printf("Number of students: %d\n\n", colleges[i].no_of_students);
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[MAX];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    Sort(arr, n);

    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int sum = ComputeSum(arr, n);
    printf("\n\nSum of elements at odd positions: %d\n", sum);

    int m;
    printf("\nEnter the number of colleges: ");
    scanf("%d", &m);
    
    StrS(m);

    return 0;
}
