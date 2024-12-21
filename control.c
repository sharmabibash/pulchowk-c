// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 1; i < 5; i++)
//     {
//         for (j = i; j < 5; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
/*
#include <stdio.h>

int main() {
    float salePrice, netPayable;
    char itemType;
    scanf("%f %c", &salePrice, &itemType);

    if (itemType == 'N') {
        netPayable = salePrice + (0.06 * salePrice);
    } else if (itemType == 'F') {
        netPayable = salePrice + (0.13 * salePrice);
    }

    printf("%.2f", netPayable);
    return 0;
}
*/
/*#include <stdio.h>

int main() {
    int customerNumber, units;
    float amount;
    scanf("%d %d", &customerNumber, &units);

    if (units <= 50) {
        amount = units * 0.50;
    } else if (units <= 100) {
        amount = 100 + (units - 50) * 0.65;
    } else if (units <= 200) {
        amount = 230 + (units - 100) * 0.80;
    } else {
        amount = 390 + (units - 200) * 1.00;
    }

    printf("%.2f", amount);
    return 0;
}
*/
/*#include <stdio.h>

int main() {
    float salePrice, netPayable, tax;
    char itemType;
    scanf("%f %c", &salePrice, &itemType);

    switch (itemType) {
        case 'G':
            tax = 0.10 * salePrice;
            break;
        case 'C':
            tax = 0.15 * salePrice;
            break;
        case 'L':
            tax = 0.24 * salePrice;
            break;
        case 'T':
            tax = 0.20 * salePrice;
            break;
    }

    netPayable = salePrice + tax;

    if (netPayable > 6000) {
        netPayable -= 0.02 * netPayable;
    }

    printf("%.2f", netPayable);
    return 0;
}
*/
/*#include <stdio.h>

int main() {
    int p, q, start, end, sum = 0, i;
    scanf("%d %d %d %d", &p, &q, &start, &end);
    i = start;

    do {
        if (i % 2 != 0 && i % p == 0 && i % q != 0) {
            sum += i;
        }
        i++;
    } while (i <= end);

    printf("%d", sum);
    return 0;
}
*/
/*#include <stdio.h>

int main() {
    int p, q, start, end, sum = 0, i;
    scanf("%d %d %d %d", &p, &q, &start, &end);
    i = start;

    while (i <= end) {
        if (i % 2 != 0 && i % p == 0 && i % q != 0) {
            sum += i;
        }
        i++;
    }

    printf("%d", sum);
    return 0;
}
*/
/*#include <stdio.h>

int main() {
    int p, q, start, end, sum = 0;
    scanf("%d %d %d %d", &p, &q, &start, &end);

    for (int i = start; i <= end; i++) {
        if (i % 2 != 0 && i % p == 0 && i % q != 0) {
            sum += i;
        }
    }

    printf("%d", sum);
    return 0;
}
*/
/*case 1
#include <stdio.h>

int main() {
    int n, count = 0;
    float sum = 0, num;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%f", &num);
        if (num < 0) {
            break;
        }
        sum += num;
        count++;
    }

    if (count > 0) {
        printf("%.2f %.2f", sum, sum / count);
    } else {
        printf("0.00 0.00");
    }

    return 0;
}

*/
/*
case 2
#include <stdio.h>

int main() {
    int n, count = 0;
    float sum = 0, num;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%f", &num);
        if (num < 0) {
            continue;
        }
        sum += num;
        count++;
    }

    if (count > 0) {
        printf("%.2f %.2f", sum, sum / count);
    } else {
        printf("0.00 0.00");
    }

    return 0;
}

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number : ");
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
}
