
// Q.4 do while
/*#include <stdio.h>

int main()
{
    int p, q, sum = 0, start, end, i;

    printf("Enter the initial value: ");
    scanf("%d", &start);
    printf("Enter the final value: ");
    scanf("%d", &end);
    printf("Enter the 'P' value: ");
    scanf("%d", &p);
    printf("Enter the 'Q' value: ");
    scanf("%d", &q);

    i = start;

    do
    {
        if (i % 2 != 0 && i % p == 0 && i % q != 0)
        {
            sum += i;
        }
        i++;
    } while (i <= end);

    printf("The sum is: %d\n", sum);
    return 0;
}
*/
// while loop
/*
#include <stdio.h>
int main()
{
    int p, q, start, end, sum = 0, i;
    printf("Enter the initial value: ");
    scanf("%d", &start);
    printf("Enter the final value: ");
    scanf("%d", &end);
    printf("Enter the 'P' value: ");
    scanf("%d", &p);
    printf("Enter the 'Q' value: ");
    scanf("%d", &q);
    i = start;
    while (i <= end)
    {
        if (i % 2 != 0 && i % p == 0 && i % q != 0)
        {
            sum += i;
        }
        i++;
    }
    printf("The Sum is : %d", sum);
    return 0;
}*/

// for loop
/*
#include <stdio.h>
int main()
{
    int start, end, p, q, sum = 0, i;
    printf("Enter the initial value: ");
    scanf("%d", &start);
    printf("Enter the final value: ");
    scanf("%d", &end);
    printf("Enter the 'P' value: ");
    scanf("%d", &p);
    printf("Enter the 'Q' value: ");
    scanf("%d", &q);

    for (i = start; i <= end; i++)
    {
        if (i % 2 != 0 && i % p == 0 && i % q != 0)
        {
            sum += i;
        }
    }
    printf("The Sum is : %d", sum);
    return 0;
}*/

// pattern display *

/*#include <stdio.h>
int main()
{
    int n = 5, i, j, k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/

/* pattern below
     1
    12
   123
  1234
 12345*/
/*#include <stdio.h>
int main()
{
    int i, j, k, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf(" ");
        }

        for (k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}
*/
/*
    1
   123
  12345
 1234567*/
/*#include <stdio.h>
int main()
{
    int i, j, k, n = 4;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf(" ");
        }

        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}
*/

// pattern
/*                              11
                        11      22
                11      22      33
        11      22      33      44*/
/*#include <stdio.h>
int main()
{
    int i, j, k, n, m = 4;
    printf("Enter number of multiple to display their pattern :  ");
    scanf("%d", &n);
    for (i = 1; i <= m; i++)
    {

        for (j = m; j >= i; j--)
        {
            printf("\t");
        }
        for (j = 1; j <= i; j++)
        {
            // printf(" ");
            printf("%d\t", n * j);
        }

        printf("\n");
    }
}
*/

// Case 1 QN.6
/*
#include <stdio.h>
int main()
{
    int n, count = 0, i;
    int sum = 0;
    printf("Enter number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n < 0)
        {
            break;
        }
        sum = sum + i;
        count++;
    }
    if (count > 0)
    {
        printf("The sum is : %d", sum);
        float avg = (float)sum / n;
        printf("\nThe average is : %.2f", avg);
        printf("\nTotal number is :%d", count);
    }
    return 0;
}
*/

// Case 2 QN.6
#include <stdio.h>
int main()
{
    int n, count = 0, i;
    int sum = 0, num;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("Start Enter value : ");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num < 0)
        {
            continue;
        }
        sum = sum + num;
        count++;
    }
    if (count > 0)
    {
        printf("The sum is : %d", sum);
        float avg = (float)sum / count;
        printf("\nThe average is : %.2f", avg);
        printf("\nTotal number is :%d", count);
    }
    return 0;
}

/*
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter number : ");
    scanf("%d", &n);
    // printf("%d", n);
    for (i = 1; i <= n; i++)
    {
        printf("\nBibash");
    }
    return 0;
}*/