#include <stdio.h>

int main()
{
    int n, i, j;
    float sum = 0, fact;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = 1;

        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }

        sum = sum + (i / fact);
    }

    printf("Sum = %f", sum);

    return 0;
}
