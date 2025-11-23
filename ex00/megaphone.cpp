
#include <iostream>

int main(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << (char)std::toupper(av[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* OUD AND UNBEARABLE FEEDBACK NOIS *" << std::endl;
	return (0);
}