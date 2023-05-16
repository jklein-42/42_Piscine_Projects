int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, power - 1)));
}
/*
#include <stdio.h>
int	main(void)
{
	int	base;
	int exponent;

	base = 2;
	exponent = 3;
	printf("power number: %d\n", ft_recursive_power(base, exponent));
}*/
