#include <stdio.h>
#include <string.h>
#include <conio.h>
struct student
{
    char name[100];
    int roll[100];
} s[100];
void main()
{
    int n, i;
    printf("Enter how many records : ");
    scanf("%d", &n);
    s[100];
    for (i = 0; i < n; i++)
    {
        printf("Name : \n");
        scanf("%s", s[i].name);

        printf("Roll : \n");
        scanf("%d", &s[i].roll);

        printf("Name :- %s\tRoll :- %d", s[i].name, s[i].roll);
    }
}