//Write a program that takes a string and displays its first word, followed by a
//newline.

#include <unistd.h>

int ft_isletter(char car)
{
	if((car >= 65 && car <= 90) || (car >= 97 && car <= 122))
		return (1);
	return (0);
}

int ft_ispace(char car)
{
	if((car >= 9 && car <= 13) || car == 32)
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int i = 0;

	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(ft_isletter(argv[1][i]) == 0)
		i++;
	while(ft_ispace(argv[1][i]) == 0 && argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}