#include <stdio.h>

void fibbo(int n);

int main()
{
    int n;
    printf("Enter number of terms you want: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Number must be positive.\n");
    }
    else
    {
        printf("Fibonacci series: ");
        fibbo(n);
        printf("\n");
    }

    return 0;
}

void fibbo(int n)
{
    int a = 0, b = 1, next;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d ", a);
        }
        else if (i == 1)
        {
            printf("%d ", b);
        }
        else
        {
            next = a + b;
            printf("%d ", next);
            a = b;
            b = next;
        }
    }
}
