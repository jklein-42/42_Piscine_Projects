int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index < 2)
	{
		return (index);
	}
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int fib_num;

	for (fib_num = 0; fib_num < 17; fib_num++)
	{
	printf(":%d\t\n", ft_fibonacci(fib_num));
	}

	return 0;
}*/
