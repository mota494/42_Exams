//Write a program that takes a string, and displays the string in reverse
//followed by a newline.

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	while(str[i] != '\0')
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int fim = ft_strlen(argv[1]);
	while(fim >= 0)
	{
		write(1, &argv[1][fim], 1);
		fim--;
	}
	return (0);
}