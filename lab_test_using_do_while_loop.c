/*Qn.1 :- WAP in c to calculate and display the count of palindrome numbers between ranges entered by the user using concept of do loop. and assign count to variable Q . and check whether Q is armstrong or not using concept of for loop After the do the following ... a) if variable Q is Armstorng , find and display the Qth term of Fibonacci series. b) if variable Q is not armstrong, find and display the (Q+1)th term of fibonacci series. Note use the concept of while loop only in fibonacci series problem*/
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

/* Qn.2 :- Problem 1 (P1): Write a program in C to calculate the single-digit sum of a user-entered number using a while loop. The result should be stored in a variable R.

Example: For the number 1532, the sum is calculated as 1 + 5 + 3 + 2 = 11 (multi-digit), then 1 + 1 = 2 (single-digit).
Problem 2 (P2): Continue the program to check if the number R is prime or composite.

Problem 3 (P3): Extend the program:

If R is neither prime nor composite (usually referring to 1), find the Rth Fibonacci term.
If R is prime, find the (R-1)th Fibonacci term.
If R is composite, find the (R+1)th Fibonacci term.*/
/*
#include <stdio.h>

int main()
{
    int num, sum, R;
    printf("Enter any number: ");
    scanf("%d", &num);

    while (num >= 10)
    {
        sum = 0;
        while (num > 0)
        {
            sum = sum + num % 10;
            num = num / 10;
        }
        num = sum;
    }
    R = num;
    printf("\nSingle digit sum: %d", R);

    if (R == 1)
    {
        printf("\nNeither prime nor composite\n");
    }
    else
    {
        int prime = 1;
        for (int i = 2; i * i <= R; i++)
        {
            if (R % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("\nR is a prime number");
        }
        else
        {
            printf("\nR is not a prime number");
        }
    }

    int first = 0, second = 1, next = 0;
    int fibo;

    if (R == 1)
    {
        fibo = R;
    }
    else
    {
        int prime = 1;
        for (int i = 2; i * i <= R; i++)
        {
            if (R % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            fibo = R - 1;
        }
        else
        {
            fibo = R + 1;
        }
    }

    for (int i = 0; i < fibo; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }

    printf("\nRequired Fibonacci term: %d\n", (fibo == 0) ? 0 : first);

    return 0;
}
*/