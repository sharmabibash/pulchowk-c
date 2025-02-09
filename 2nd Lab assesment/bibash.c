/*
QN1.
a. Input and display elements of a 3*3 matrix.
b. Calculate Total as total=sum of principal diagonal elements + sum of reverse diagonal elements.
c. Divide the total by second lowes number and assign the result to R
d. Check wheather the value of R is palindrome number or not using userdefined function checkP()
e. If the R is palindrome number then display the Rth term of Fibbonacci series else display the (R+1)th term of Fibonacci series, Use the recursive fubction named FiboR() to find the Fibonacci term.
*/
/*#include <stdio.h>

int CheckP(int n)
{
    int rev = 0, original = n, rem;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return original == rev;
}

int FiboR(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return FiboR(n - 1) + FiboR(n - 2);
}

int main()
{
    int MatA[3][3], i, j, num[9], k = 0;
    int diag1 = 0, diag2 = 0, total = 0;
    int secondL, R;

    printf("Enter the elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &MatA[i][j]);
            num[k++] = MatA[i][j];
            if (i == j)
                diag1 += MatA[i][j];
            if (i + j == 2)
                diag2 += MatA[i][j];
        }
    }
    printf("The Diagonal 1 Sum : %d \n", diag1);
    printf("The Diagonal 2 Sum : %d \n", diag2);

    printf("The entered matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", MatA[i][j]);
        }
        printf("\n");
    }

    total = diag1 + diag2;

    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 9; j++)
        {
            if (num[i] > num[j])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    secondL = num[1];
    R = total / secondL;
    printf("Second Lowest Element : %d\n", secondL);

    if (CheckP(R))
    {
        printf("R is a palindrome. Fibonacci term at R (%d) is: %d\n", R, FiboR(R));
    }
    else
    {
        printf("R is not a palindrome. Fibonacci term at R+1 (%d) is: %d\n", R + 1, FiboR(R + 1));
    }

    return 0;
}
*/

/*QN2
Input a 3x3 matrix from the user.
Find all Armstrong numbers in both diagonals of the matrix.
Compute their sum and count.
Calculate d = sum/count.
Check if d is an Armstrong number using a user-defined function checkArm().
If d is an Armstrong number, display the (d-1)th lowest element of the sorted matrix.
If d is not an Armstrong number, print a message indicating that d is not an Armstrong number.
*/
/*#include <stdio.h>
#include <math.h>
int checkArm(int num)
{
    int original = num, sum = 0, digits = 0, remainder;

    while (original != 0)
    {
        original /= 10;
        digits++;
    }

    original = num;

    while (original != 0)
    {
        remainder = original % 10;
        sum += (int)pow(remainder, digits);
        original /= 10;
    }

    return (sum == num);
}

void selectionSort(int arr[], int n)
{
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    int matA[3][3], store[9], i, j, k = 0, s = 0, c = 0;
    int d;

    printf("Enter the elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matA[i][j]);
            store[k++] = matA[i][j];
        }
    }

    printf("The entered matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matA[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j || i + j == 2)
            {
                if (checkArm(matA[i][j]))
                {
                    s += matA[i][j];
                    c++;
                }
            }
        }
    }

    if (c == 0)
    {
        printf("No Armstrong numbers found in the diagonals.\n");
        return 0;
    }
    selectionSort(store, 9);

    printf("The sum and count of Armstrong numbers in diagonals: %d and %d\n", s, c);

    d = s / c;
    int check = checkArm(d);

    if (check == 1)
    {
        printf("d = %d is an Armstrong number.\n", d);
        printf("The (d-1)th lowest element is: %d\n", store[d - 1]);
    }
    else
    {
        printf("d = %d is not an Armstrong number.\n", d);
    }

    return 0;
}*/