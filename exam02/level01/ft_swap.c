//Write a function that swaps the contents of two integers the adresses of which
//are passed as parameters.

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>

int main()
{
	int a = 20;
	int b = 30;

	ft_swap(&a,&b);
	printf("%d, %d", a, b);
	return (0);
}