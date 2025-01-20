/*1. WAP in C to find the sum of principal and secondary diagonal elements of a 2D array
and check whether the sum is an Armstrong number or not.*/

/*#include <stdio.h>
#include <math.h>

int main()
{
    int a[20][20], rows, cols, i, j, sum = 0, num;
    printf("Enter the rows: ");
    scanf("%d", &rows);
    printf("Enter the columns: ");
    scanf("%d", &cols);
    printf("Start inserting values: \n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (i == j || i + j == rows - 1)
            {
                scanf("%d", &a[i][j]);
                sum = sum + a[i][j];
            }
        }
    }
    num = sum;
    int rem, armstrong_sum = 0, digits = 0;
    int temp = num;
    while (temp > 0)
    {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp > 0)
    {
        rem = temp % 10;
        armstrong_sum += pow(rem, digits);
        temp /= 10;
    }

    if (armstrong_sum == sum)
    {
        printf("Armstrong Number\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }

    return 0;
}*/

/*2. Write a program to read a 4*4 square matrix, find the minimum value of that matrix and
assign it to variable min, and replace all the elements of the principal diagonal with the
min if the element is odd otherwise replace all the elements of secondary elements with
min and display the updated matrix.*/

/*#include <stdio.h>
#include <limits.h>

int main()
{
    int matA[4][4], i, j, min = INT_MAX;

    printf("Start inserting values (4x4 matrix):\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &matA[i][j]);
            if (matA[i][j] < min)
            {
                min = matA[i][j];
            }
        }
    }

    if (min % 2 != 0)
    {
        for (i = 0; i < 4; i++)
        {
            matA[i][i] = min;
        }
    }
    else
    {
        for (i = 0; i < 4; i++)
        {
            matA[i][3 - i] = min;
        }
    }

    printf("Updated matrix:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", matA[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
/*3. Write a program to find the largest and smallest element of an array, display the numbers
in ascending as well as descending order using a single function and display the result in
the calling function.*/
/*#include <stdio.h>
void DisplayArray(int arr[], int size, int *largest, int *smallest)
{
    *largest = arr[0];
    *smallest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *largest)
        {
            *largest = arr[i];
        }
        if (arr[i] < *smallest)
        {
            *smallest = arr[i];
        }
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array in ascending order:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Array in descending order:\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[100], size, largest, smallest;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    DisplayArray(arr, size, &largest, &smallest);
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}*/

/*4. WAP in C to concatenate two strings entered by the user without using the string
handling function.*/
/*#include <stdio.h>
int main()
{
    char str1[100], str2[100], result[200];
    int i = 0, j = 0;
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    while (str1[i] != '\0')
    {
        if (str1[i] == '\n')
        {
            str1[i] = '\0';
            break;
        }
        i++;
    }
    i = 0;
    while (str1[i] != '\0')
    {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0' && str2[j] != '\n')
    {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';
    printf("Concatenated string: %s\n", result);

    return 0;
}
*/

/*WAP in C to check whether a string entered by the user is palindrome or not without
using the string handling function.*/
#include <stdio.h>
int main()
{
    char str[100];
    int length = 0, isPalindrome = 1;
    printf("Enter a string to check palindrome or not : ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }
    for (int i = 0; i < length; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
    {
        printf("String is Palindrome ");
    }
    else
    {
        printf("String is not Palindrome ");
    }
    return 0;
}
