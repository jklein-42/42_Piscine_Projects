int	ft_iterative_power(int nb, int power)
{
	int	number_00;

	number_00 = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power)
	{
		number_00 *= nb;
		power--;
	}
	return (number_00);
}
/*
#include <stdio.h>
int main(void)
{
	int base;
	int	exponent;

	base = 2;
	exponent = -3;
	printf("power: %d\n", ft_iterative_power(base, exponent));
}*/
