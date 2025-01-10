#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
} s[100];

void main()
{
    int n, i;
    printf("Enter how many records: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);
    }

    for (i = 0; i < n; i++)
    {
        printf("Name: %s\nRoll: %d\n", s[i].name, s[i].roll);
    }
}
