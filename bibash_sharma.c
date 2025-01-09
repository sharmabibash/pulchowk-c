
// #include <stdio.h>  // Header files
// #include <string.h> // for srting type
// #include <stdlib.h> // it is sdvanced lib files
// #include <math.h>   // it is used for math functions

//  --> used for single line comment
/*  --> used for multiple line comments
 */

/*Data types int -- > example : -1, 2, 3, 4, etc
char ---> example : a,b,c,d, education etc;
float ---> example : 1.0,2.33,1.99 etc;
*/

// Q.1 WAP to procedure sum of the two number whuch is entered by the user
/*#include <stdio.h>
int main()
{
    float x, y, sum;
    // printf("Enter any two number : ");
    // scanf("%d,%d", &x, &y);
    printf("Enter first number :");
    scanf("%f", &x);
    printf("\nEnter Second number :");
    scanf("%f", &y);
    sum = x + y;
    printf("%f is the sum of two number ", sum);
    return 0;
}

// int --> %d
// char --> %c for single character or %s for multiple character
// float --> %f for floating numbers or decimal values
*/

// Area of cirlce

#include <stdio.h>
void main()
{
    float x, y, multiple;

    printf("Enter any two numbers for display its multiple :-");
    scanf("%f,%f", &x, &y);
    multiple = x * y;
    printf("Multiple :- %f", multiple);
    getch();
    // return 0;
}
// Q.2 WAP to multiple of two number which is given by user. use floating
// Q.3 WAP to find sum of 5 number which is given by user. use floating .
