int	ft_atoi(char	*str)
{
	int	calculation;
	int	source;

	source = 1;
	calculation = 0;
	while (*str == '\t'
		|| *str == '\n'
		|| *str == '\v'
		|| *str == '\r'
		|| *str == '\f'
		|| *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*(str++) == '-')
			source = -source;
	}
	while (*str >= '0' && *str <= '9')
	{
		calculation = calculation * 10;
		calculation = (calculation + (*(str++) - '0'));
	}
	return (calculation * source);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str00;
	str00 = "    ---+--+1234ab567";
	printf("%d\n", ft_atoi(str00));
	return (0);
}*/
