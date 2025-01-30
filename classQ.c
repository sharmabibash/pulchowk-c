/*write a program in C input two numbers from user if both are even number the fv=(n1+n2)+1 and if both are odd n1+n2 and if mix (n1+n2)-1 and also check fv divisible by 3 and not by 5 using function 1. with arguments and with return type 2. with arguments without return type 3. without arguments with return type 4. without arguments and without return type*/

/*1. With arguments and with return type */
/*#include <stdio.h>
int check(int n1, int n2)
{
    int fv;
    if (n1 % 2 == 0 && n2 % 2 == 0)
    {
        fv = (n1 + n2) + 1;
    }
    else if (n1 % 2 != 0 && n2 % 2 != 0)
    {
        fv = n1 + n2;
    }
    else
    {
        fv = (n1 + n2) - 1;
    }
    if (fv % 3 == 0 && fv % 5 != 0)
    {
        printf("fv = %d is divisible by 3 and not by 5.\n", fv);
    }
    else
    {
        printf("fv = %d does not meet the divisibility condition.\n", fv);
    }
    return fv;
}
int main()
{
    int n1, n2;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);
    int result = check(n1, n2);
    printf("Result FV : %d", result);
    return 0;
}*/

/*2. With arguments and without return type*/
/*#include <stdio.h>
void check(int n1, int n2)
{
    int fv;
    if (n1 % 2 == 0 && n2 % 2 == 0)
    {
        fv = (n1 + n2) + 1;
    }
    else if (n1 % 2 != 0 && n2 % 2 != 0)
    {
        fv = n1 + n2;
    }
    else
    {
        fv = (n1 + n2) - 1;
    }
    if (fv % 3 == 0 && fv % 5 != 0)
    {
        printf("fv = %d is divisible by 3 and not by 5.\n", fv);
    }
    else
    {
        printf("fv = %d does not meet the divisibility condition.\n", fv);
    }
}
int main()
{
    int n1, n2;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);
    check(n1, n2);
    return 0;
}*/

/*3. Without arguments and with return type*/
/*#include <stdio.h>
int check()
{
    int n1, n2;
    int fv;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);
    if (n1 % 2 == 0 && n2 % 2 == 0)
    {
        fv = (n1 + n2) + 1;
    }
    else if (n1 % 2 != 0 && n2 % 2 != 0)
    {
        fv = n1 + n2;
    }
    else
    {
        fv = (n1 + n2) - 1;
    }
    if (fv % 3 == 0 && fv % 5 != 0)
    {
        printf("fv = %d is divisible by 3 and not by 5.\n", fv);
    }
    else
    {
        printf("fv = %d does not meet the divisibility condition.\n", fv);
    }
    return fv;
}
int main()
{
    int result = check();

    printf("\nResult FV : %d\n", result);
    return 0;
}*/

/*4. Without arguments and without return type*/
#include <stdio.h>
void check()
{
    int n1, n2;
    int fv;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);
    if (n1 % 2 == 0 && n2 % 2 == 0)
    {
        fv = (n1 + n2) + 1;
    }
    else if (n1 % 2 != 0 && n2 % 2 != 0)
    {
        fv = n1 + n2;
    }
    else
    {
        fv = (n1 + n2) - 1;
    }
    if (fv % 3 == 0 && fv % 5 != 0)
    {
        printf("fv = %d is divisible by 3 and not by 5.\n", fv);
    }
    else
    {
        printf("fv = %d does not meet the divisibility condition.\n", fv);
    }
}
int main()
{
    check();
    return 0;
}
