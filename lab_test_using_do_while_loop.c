
/*
#include <stdio.h>
#include <math.h>

int main()
{
    int start, end, num, temp, remainder, count = 0, sum, digits, q;

    printf("Enter the initial range: ");
    scanf("%d", &start);
    printf("Enter the final range: ");
    scanf("%d", &end);
    printf("Palindrome Numbers are: ");
    num = start;

    do
    {
        int rev = 0;
        temp = num;
        while (temp != 0)
        {
            remainder = temp % 10;
            rev = rev * 10 + remainder;
            temp = temp / 10;
        }
        if (rev == num)
        {
            printf("%d\t", num);
            count++;
        }
        num++;
    } while (num <= end);

    printf("\nArmstrong Numbers are: ");
    num = start;

    do
    {
        sum = 0;
        digits = 0;
        temp = num;
        while (temp != 0)
        {
            digits++;
            temp /= 10;
        }

        temp = num;
        while (temp != 0)
        {
            remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }

        if (sum == num)
        {
            printf("%d\t", num);
        }
        num++;
    } while (num <= end);

    q = count;
    printf("\n\nCount of palindrome numbers (q): %d\n", q);

    if (q == 0)
    {
        printf("Fibonacci series up to the %d-th term: 0\n", q + 1);
    }
    else if (q == 1)
    {
        printf("Fibonacci series up to the %d-th term: 0 1\n", q);
    }
    else
    {
        printf("Fibonacci series up to the %d-th term: ", q + 1);
        int first = 0, second = 1, next;
        printf("%d %d ", first, second);
        for (int term = 3; term <= q + 1; term++)
        {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }

    printf("\nTotal Fibonacci numbers up to the %d-th term: %d\n", q + 1, q + 1);

    return 0;
}
*/