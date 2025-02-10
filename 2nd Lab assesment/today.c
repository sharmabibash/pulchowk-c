#include <stdio.h>

int checkpalin(int num)
{
    int reversed = 0, original = num;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed == original;
}

int main()
{
    int matrix[5][5], freq[101] = {0}, i, j, maxFreq = 0, minFreq = 101;
    int D, H, L, count = 0, num;

    printf("Enter elements of 5x5 matrix:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            freq[matrix[i][j]]++;
        }
    }

    printf("Entered 5x5 matrix:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 101; i++)
    {
        if (freq[i] > 0)
        {
            if (freq[i] > maxFreq)
                maxFreq = freq[i];
            if (freq[i] < minFreq)
                minFreq = freq[i];
        }
    }

    H = maxFreq;
    L = minFreq;
    D = H + L;

    printf("H (max frequency) = %d, L (min frequency) = %d, D = %d\n", H, L, D);

    printf("Repeated elements in the matrix: ");
    int foundRepeated = 0;
    for (i = 0; i < 101; i++)
    {
        if (freq[i] > 1)
        {
            printf("%d (x%d) ", i, freq[i]);
            foundRepeated = 1;
        }
    }
    if (!foundRepeated)
    {
        printf("None");
    }
    printf("\n");

    printf("Palindrome numbers up to the %dth palindrome:\n", D);
    count = 0;
    for (num = 10; num <= 1000; num++)
    {
        if (checkpalin(num))
        {
            count++;
            printf("%d ", num);
            if (count == D)
            {
                printf("\nThe %dth palindrome number is: %d\n", D, num);
                break;
            }
        }
    }

    printf("\nTotal palindromes found: %d\n", count);

    return 0;
}
