
// 5.  Pattern Print
/*#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of stars : ");
    scanf("%d", &n);

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

    return 0;
}*/

/* 1. Determine the net payable amount on a sale using if-else statements. The net payable
amount consists of the sale price plus sales tax. The sales tax is decided as
 6% of the sale price for national items
 13% of the sale price for foreign items
#include <stdio.h>*/
/*
int main()
{
    float salePrice, netPayable;
    char itemType;
    printf("Enter Sale Price : ");
    scanf("%f", &salePrice);
    printf("Enter Item Type N for national & F for foreign:");
    scanf("%s", &itemType);

    if (itemType == 'N')
    {
        netPayable = salePrice + (0.06 * salePrice);
    }
    else if (itemType == 'F')
    {
        netPayable = salePrice + (0.13 * salePrice);
    }

    printf("%.2f", netPayable);
    return 0;
}*/

/*2. An electric power distribution company charges its domestic consumers as follows:
Consumption               Units Rate of Charge
0 – 50                     Rs. 0.50 per unit
51 – 100                   Rs. 100 plus Rs. 0.65 per unit excess of 100
101 – 200                  Rs. 230 plus Rs. 0.80 per unit excess of 200
201 and above              Rs. 390 plus Rs. 1.00 per unit excess of 300*/
/*
#include <stdio.h>
int main()
{
    int units, customer_number;
    float amount;
    printf("Enter Customer Number : ");
    scanf("%d", &customer_number);
    printf("Enter Units :");
    scanf("%d", &units);
    if (units <= 50)
    {
        amount = units * 0.50;
    }
    else if (units <= 100)
    {
        amount = 100 + (units - 50) * 0.65;
    }
    else if (units <= 200)
    {
        amount = 230 + (units - 100) * 0.80;
    }
    else
    {
        amount = 390 + (units - 200) * 1.00;
    }
    printf("%.2f", amount);
    return 0;
}
*/

/*Determine the net payable amount (sale price + tax) using the concept of the switch
statement. The sales tax is decided as:
 10% of the sale price for grocery items.
 15% of the sale price for cosmetics items.
 20% of the sale price for clothing items.
 24% of the sale price for liquor items
Also, apply a 2% discount on the total price if the total price is more than Rs. 6000*/
/*#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1];
    float sale_price, net_payable, tax;
    printf("Enter the sale price of items :");
    scanf("%f", &sale_price);
    printf("Enter items types which is available below : ");
    printf("\nG for grocery items \nC for cosmetics items \nT for Clothing items \nL for liquor items : ");
    scanf("%s", ch);
    strupr(ch);
    // printf("%s", ch);
    switch (ch[0])
    {
    case 'G':
        tax = 0.10 * sale_price;
        break;
    case 'C':
        tax = 0.15 * sale_price;
        break;
    case 'T':
        tax = 0.20 * sale_price;
        break;
    case 'L':
        tax = 0.24 * sale_price;
        break;
    default:
        printf("Invalid Operation \n");
    }

    net_payable = sale_price + tax;
    if (net_payable > 5000)
    {
        net_payable -= 0.02 * net_payable;
    }
    printf("Net amount : %.2f", net_payable);
    return 0;
}*/

/* WAP in C to check enetred character is vowel or consonant */
/*#include <stdio.h>
#include <string.h>
int main()
{
    char ch[50];
    printf("Enter any alphabet letter to check volwel or consonant : ");
    scanf("%s", ch);
    strlwr(ch);
    if (ch[0] == 'a' || ch[0] == 'e' || ch[0] == 'i' || ch[0] == 'o' || ch[0] == 'u')
    {
        printf("%s is vowel", ch);
    }
    else
    {
        printf("%s is consonant", ch);
    }
}*/
/*
#include <stdio.h>

int main()
{
    int c_programming, physics, maths, applied_mechanics, basic_electrical;
    int total_marks = 500;
    float percentage;
    char grade;

    printf("Enter marks for C Programming: ");
    scanf("%d", &c_programming);
    printf("Enter marks for Physics: ");
    scanf("%d", &physics);
    printf("Enter marks for Maths: ");
    scanf("%d", &maths);
    printf("Enter marks for Applied Mechanics: ");
    scanf("%d", &applied_mechanics);
    printf("Enter marks for Basic Electrical: ");
    scanf("%d", &basic_electrical);

    if (c_programming < 40 || physics < 40 || maths < 40 || applied_mechanics < 40 || basic_electrical < 40)
    {
        printf("Result: Failed\n");
        return 0;
    }

    int obtained_marks = c_programming + physics + maths + applied_mechanics + basic_electrical;
    percentage = (float)obtained_marks / total_marks * 100;

    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'E';
    }

    printf("Result: Passed\n");
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
*/