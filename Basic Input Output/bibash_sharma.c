
// #include <stdio.h>  // Header files
// #include <string.h> // for srting type
// #include <stdlib.h> // it is sdvanced lib files
// #include <math.h>   // it is used for math functions

//  --> used for single line comment.
/*  --> used for multiple line comments
 */

/*Data types int -- > example : -1, 2, 3, 4, etc = 4 byte
char ---> example : a,b,c,d, education etc;
float ---> example : 1.0,2.33,1.99 etc;
double ---> example : 9817712881
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
// double ---> %ld for double value. -8 bytes
*/

// Area of cirlce

/*#include <stdio.h>
void main()
{
    float x, y, multiple;

    printf("Enter any two numbers for display its multiple :-");
    scanf("%f,%f", &x, &y);
    multiple = x * y;
    printf("Multiple :- %f", multiple);
    getch();
    // return 0;
}*/
// Q.2 WAP to multiple of two number which is given by user. use floating
// Q.3 WAP to find sum of 5 number which is given by user. use floating .

// Q . 4 WAP to take name from user and print their first character of the name .
/*#include <stdio.h>
#include <string.h>
int main()
{
    char name[200]; // char - 1 byte
    printf("Enter any string character : ");
    // scanf("%s", &name);
    gets(name);
    printf("%s", name);
    return 0;
}*/

/*
for string or character type data
scanf,
gets()---> multiple character
getchar()---> for single character

*/

/*#include <stdio.h>
#include <string.h>
void main()
{
    char c;
    printf("Enter any chracater : ");
    // scanf("%s", &c);
    c = getchar();
    // printf("Enterd character is :\t ");
    putchar(c);
}*/

/*
getchar() ---> it is used for single character. it is input function
putchar()  ---> it is also used for single character. it is output funtion.
*/

// Q.5 WAP to enter anme by user and display it using printf(),scanf():
/*#include <stdio.h>
int main()
{
    char usha[50]; // start from zero element   &[0]; usha[0]==bibash
    printf("Enter your name : ");
    scanf("%s", &usha);
    printf("%s", usha);
}*/

// Q.5 WAP to enter anme by user and display it using puts(),gets():
/*#include <stdio.h>
int main()
{
    char usha[50];
    gets(usha);
    puts(usha);
}*/

// int , char, float, double,
//  printf,scanf,getchar,putchar,gets,puts
// include<stdio.h>
// include<string.h>
// include<math.h>  --> c(pow,4), sqrt(a),
