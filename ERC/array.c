/*1. Write a program to display the addition of two matrix. Your program should
include one function named input to enter the values of two matrix, one
function named add to perform addition of two matrix and one function
named display to show the result obtained after addition of two matrix.*/

/*#include <stdio.h>
int matA[20][20], matB[20][20], sum[20][20];
int row, col;

void input() {                       // Function 1 for input data
    int i, j;
    printf("Enter the row of Matrix: ");
    scanf("%d", &row);
    printf("Enter the Column of Matrix: ");
    scanf("%d", &col);

    printf("Start Inserting Data of Matrix A:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Start Inserting Data of Matrix B:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matB[i][j]);
        }
    }
}

void add() {     // Function 2 for add matrix
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            sum[i][j] = matA[i][j] + matB[i][j];
        }
    }
}

void display() {    // function 3 for display add
    int i, j;
    printf("The sum of matrices is:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

int main() {  // all function called in main function
    input();
    add();
    display();
    return 0;
}
*/


/*2. Write a C program to insert an element to a desired position to an array
using function. The new element to be inserted and desired position should
be given by user*/

/*#include <stdio.h>

void insertElement(int arr[], int *size, int element, int position) {
    if (position < 0 || position > *size) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", *size);
        return;
    }
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}

int main() {
    int arr[100], size, element, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position (0-based index) where you want to insert: ");
    scanf("%d", &position);

    insertElement(arr, &size, element, position);

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/

/*3. Write a program to find the largest and smallest element of an array using a
single function and display the result in calling function.*/
/*#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    *min = *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[100], size, min, max;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findMinMax(arr, size, &min, &max);

    printf("Smallest element: %d\n", min);
    printf("Largest element: %d\n", max);

    return 0;
}
*/

/*4. Write a program to input two matrices of size m*n and p*q respectively. Pass
these matrices to the function to calculate the product matrix. Display the
product matrix in the main () function.*/
/*#include <stdio.h>

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int resultMatrix[][10], int m, int n, int p, int q) {
    if (n != p) {
        printf("Matrix multiplication not possible! Columns of first matrix must be equal to rows of second matrix.\n");
        return;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < n; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

int main() {
    int m, n, p, q;
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible! Columns of first matrix must be equal to rows of second matrix.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, m, n, p, q);

    printf("Product Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

/*5. Write the program to pass an array to function and sort them. 
*/

/*#include <stdio.h>

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}*/


/*6. Write a program to read a square matrix of N*N and find the sum of both
diagonals.*/
/*#include <stdio.h>

void findDiagonalSum(int matrix[][10], int n, int *sumPrimary, int *sumSecondary) {
    *sumPrimary = 0;
    *sumSecondary = 0;

    for (int i = 0; i < n; i++) {
        *sumPrimary += matrix[i][i];
        *sumSecondary += matrix[i][n - i - 1];
    }
}

int main() {
    int n, matrix[10][10], sumPrimary, sumSecondary;

    printf("Enter the size of the square matrix (N): ");
    scanf("%d", &n);

    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    findDiagonalSum(matrix, n, &sumPrimary, &sumSecondary);

    printf("Sum of Primary Diagonal: %d\n", sumPrimary);
    printf("Sum of Secondary Diagonal: %d\n", sumSecondary);

    return 0;
}
*/
