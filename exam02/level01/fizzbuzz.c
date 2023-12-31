//Write a program that prints the numbers from 1 to 100, each separated by a
//newline.
//If the number is a multiple of 3, it prints 'fizz' instead.
//If the number is a multiple of 5, it prints 'buzz' instead.
//If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

#include <unistd.h>

void ft_printchar(int n)
{
	write(1, &n, 1);
}

void ft_miniputnbr(int n)
{
	if(n>10)
	{
		ft_miniputnbr(n / 10);
		ft_miniputnbr(n % 10);
	}
	else
		ft_printchar(n + 48);
}

int main()
{
	int n = 0;

	while(n <= 100)
	{
		if(n % 3 == 0 && n % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if(n % 3 == 0)
			write(1, "fizz", 4);
		else if(n % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_miniputnbr(n);
		write(1, "\n", 1);
		n++;
	}
	write(1, "\n", 1);
	return (0);
}