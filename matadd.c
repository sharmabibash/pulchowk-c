#include <stdio.h>
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
