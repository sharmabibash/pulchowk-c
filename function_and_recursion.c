/*1. WAP to find the sum of all odd natural numbers that are divisible by P and not by Q in a
given range using the concept of:
© function with return type and arguments
© function without return type and with arguments

© function without return type and no arguments
© function with return type and no arguments*/

/* Function with return type and arguments*/
/*#include <stdio.h>
int SumOddDiv(int start, int end, int p, int q)
{
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0 && i % p == 0 && i % q != 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    int start, end, p, q;
    printf("Enter the initial : ");
    scanf("%d", &start);
    printf("Enter the final : ");
    scanf("%d", &end);
    printf("Enter the P : ");
    scanf("%d", &p);
    printf("Enter the Q : ");
    scanf("%d", &q);
    printf("Sum : %d\n", SumOddDiv(start, end, p, q));
    return 0;
}*/

/*function without return type and with arguments*/

/*#include <stdio.h>
void SumOddDiv(int start, int end, int p, int q)
{
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0 && i % p == 0 && i % q != 0)
        {
            sum += i;
        }
    }
    printf("Sum : %d\n", sum);
}
int main()
{
    int start, end, p, q;
    printf("Enter the initial : ");
    scanf("%d", &start);
    printf("Enter the final : ");
    scanf("%d", &end);
    printf("Enter the P : ");
    scanf("%d", &p);
    printf("Enter the Q : ");
    scanf("%d", &q);
    SumOddDiv(start, end, p, q);
    return 0;
}*/

/*function without return type and no arguments*/
/*#include <stdio.h>
void SumOddDiv()
{
    int start, end, p, q;
    int sum = 0;
    printf("Enter the initial : ");
    scanf("%d", &start);
    printf("Enter the final : ");
    scanf("%d", &end);
    printf("Enter the P : ");
    scanf("%d", &p);
    printf("Enter the Q : ");
    scanf("%d", &q);
    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0 && i % p == 0 && i % q != 0)
        {
            sum += i;
        }
    }
    printf("Sum : %d\n", sum);
}
int main()
{

    SumOddDiv();
    return 0;
}*/

/*function with return type and no arguments*/
/*#include <stdio.h>
int SumOddDiv()
{
    int start, end, p, q;
    int sum = 0;
    printf("Enter the initial : ");
    scanf("%d", &start);
    printf("Enter the final : ");
    scanf("%d", &end);
    printf("Enter the P : ");
    scanf("%d", &p);
    printf("Enter the Q : ");
    scanf("%d", &q);
    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0 && i % p == 0 && i % q != 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{

    printf("Sum : %d\n", SumOddDiv());
    return 0;
}*/

/*2. WAP in C to calculate the value of a to the power b
using a recursive function but without using the pow() function.*/

/*#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}
int main()
{
    int a, b;
    printf("Enter base a : ");
    scanf("%d", &a);
    printf("Enter exponent b : ");
    scanf("%d", &b);
    printf("Result : %d\n", power(a, b));
}*/

/*3. WAP to check the nth term of the Fibonacci series is even or odd using the concept of recursive function.*/

#include <stdio.h>
int fibbo(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fibbo(n - 1) + fibbo(n - 2);
}
void checkEvenOdd(int n)
{
    int term = fibbo(n);
    if (term % 2 == 0)
    {
        printf("The %dth term (%d) is even\n", n, term);
    }
    else
    {
        printf("The %dth term (%d) is odd\n", n, term);
    }
}
int main()
{
    int n;
    printf("Enter number n :");
    scanf("%d", &n);
    checkEvenOdd(n);
    return 0;
}