#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i, a, sum = 0;

    for (i = 1; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        if (a < 0)
        break;

        sum = sum + a;
    }
    printf("Sum = %d", sum);
}