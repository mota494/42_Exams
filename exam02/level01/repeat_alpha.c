//Write a program called repeat_alpha that takes a string and display it
//repeating each alphabetical character as many times as its alphabetical index,
//followed by a newline.

#include <unistd.h>

int ft_isletter(char car)
{
	if(car >= 65 && car <= 90)
		return (1);
	if(car >= 97 && car <= 122)
		return (2);
	return (0);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			j = 1;
			if(ft_isletter(argv[1][i]) == 1)
			{
				while(j <= argv[1][i] - 64)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else if(ft_isletter(argv[1][i]) == 2)
			{
				while(j <= argv[1][i] - 96)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return(0);
	}
	else
	{
		write(1, "\n", 1);
		return(0);
	}
}