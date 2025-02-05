// Array code
/*#include <stdio.h>
void minmax(int arr[], int size, int *min, int *max)
{
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}

int main()
{
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[200];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min, max;
    minmax(arr, size, &min, &max);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}*/

// String Code
// Q.2
/*#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], str3[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    printf("\nLength of first string: %lu", strlen(str1));
    printf("\nLength of second string: %lu", strlen(str2));

    strcpy(str3, str1);
    printf("\nCopied first string into another variable: %s", str3);

    strcat(str3, str2);
    printf("\nConcatenated first and second strings: %s", str3);

    int cmp = strcmp(str1, str2);
    if (cmp == 0)
        printf("\nStrings are equal.");
    else if (cmp > 0)
        printf("\nFirst string is greater than second.");
    else
        printf("\nSecond string is greater than first.");

    printf("\nReversed first string: %s", strrev(str1));
    printf("\nReversed second string: %s", strrev(str2));

    return 0;
}
*/
// Q.6
/*#include <stdio.h>

void concatenate(char str1[], char str2[], char result[])
{
    int i = 0, j = 0;

    while (str1[i] != '\0')
    {
        result[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0')
    {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';
}

int main()
{
    char str1[50], str2[50], result[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    concatenate(str1, str2, result);

    printf("Concatenated string: %s", result);

    return 0;
}
*/

// Q.7

/*#include <stdio.h>
#include <string.h>

void sortStrings(char arr[][50], int n)
{
    char temp[50];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();

    char str[50][50];

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++)
    {
        gets(str[i]);
    }

    sortStrings(str, n);

    printf("\nStrings in alphabetical order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}*/

// q.8
#include <stdio.h>
#include <string.h>
int isPalindrome(char str[]);
int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    if (isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
int isPalindrome(char str[])
{
    int left = 0, right = strlen(str) - 1;

    while (left < right)
    {
        if (str[left] != str[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}

/*#include <stdio.h>
int sum(int a, int b);
int main()
{
    int x, y, add;
    printf("Enter 2 nu : ");
    scanf("%d %d", &x, &y);
    add = sum(x, y);

}
int sum(int a, int b)
{
    int s = a + b;
    return s;
}*/