int	ft_iterative_factorial(int nb)
{
	int				source;
	unsigned int	factorial;

	if (nb < 0 || nb > 100)
		return (0);
	source = 2;
	factorial = 1;
	while (source <= nb)
	{
		factorial *= source;
		++source;
	}
	return (factorial);
}
/*
#include <stdio.h>
int main(void)
{
	int	num00;

	num00 = 5;
	printf("print: %d\n", ft_iterative_factorial(num00));
}*/
