#include <stdio.h>
#include <conio.h>

int main(void)
{
	int number;
	int i, a;

	printf("Enter a number: ");
	scanf("%d", &number);

	for (i = 1; i <= 20; i++)
	{
		a = number * i;
		printf("%d * %d = %d\n", number, i, a);
	}
	getch();
}
