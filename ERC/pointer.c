/*1. Write a C program that uses pointer to represent two 2-D array of size of
m*n and p*q respectively. Find the product of these two matrices if possible
otherwise display a message "Calculation cannot be performed" using
function.*/
/*#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int *A, int *B, int *C, int m, int n, int p, int q) {
    if (n != p) {
        printf("Calculation cannot be performed! Columns of the first matrix must match the rows of the second matrix.\n");
        return;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            *(C + i * q + j) = 0;
            for (int k = 0; k < n; k++) {
                *(C + i * q + j) += (*(A + i * n + k)) * (*(B + k * q + j));
            }
        }
    }
}

void inputMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", (matrix + i * cols + j));
        }
    }
}

void printMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int m, n, p, q;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Calculation cannot be performed! Matrix multiplication rule violated.\n");
        return 0;
    }

    int *A = (int *)malloc(m * n * sizeof(int));
    int *B = (int *)malloc(p * q * sizeof(int));
    int *C = (int *)malloc(m * q * sizeof(int));

    printf("Enter elements of first matrix:\n");
    inputMatrix(A, m, n);

    printf("Enter elements of second matrix:\n");
    inputMatrix(B, p, q);

    multiplyMatrices(A, B, C, m, n, p, q);

    printf("Product Matrix:\n");
    printMatrix(C, m, q);

    free(A);
    free(B);
    free(C);

    return 0;
}
*/

/*2. Write a program using pointer to swap the value of two variable where the
swapping operation is performed in separate function.*/
/*#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
*/

/*3. Write a program to find the second largest from an array of N elements using
the concept of pointer*/
/*#include <stdio.h>

void findSecondLargest(int *arr, int n, int *secondLargest) {
    int largest = *arr;
    *secondLargest = -1;  

    for (int i = 1; i < n; i++) {
        if (*(arr + i) > largest) {
            *secondLargest = largest;
            largest = *(arr + i);
        } else if (*(arr + i) > *secondLargest && *(arr + i) != largest) {
            *secondLargest = *(arr + i);
        }
    }
}

int main() {
    int n, secondLargest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements!\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    findSecondLargest(arr, n, &secondLargest);

    if (secondLargest == -1) {
        printf("No second largest element found!\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
*/

/*4. Write a program to read a 3*3 square matrix, find minimum integer value of
a matrix, replace the diagonal elements by the minimum element and display
it using pointer*/

/*#include <stdio.h>

void replaceDiagonalWithMin(int *matrix, int size) {
    int min = *matrix;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (*(matrix + i * size + j) < min) {
                min = *(matrix + i * size + j);
            }
        }
    }

    for (int i = 0; i < size; i++) {
        *(matrix + i * size + i) = min;
    }
}

void printMatrix(int *matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", *(matrix + i * size + j));
        }
        printf("\n");
    }
}

int main() {
    int size = 3;
    int matrix[3][3];

    printf("Enter the elements of a 3x3 matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    replaceDiagonalWithMin((int *)matrix, size);

    printf("Matrix after replacing diagonal elements with the minimum value:\n");
    printMatrix((int *)matrix, size);

    return 0;
}
*/
