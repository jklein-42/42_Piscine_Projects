int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (i < 0 || i > 2147483647)
		return (0);
	else
	{
		while (i * i < nb && i < 46340)
		{
			i++;
		}
		if (i * i == nb)
			return (i);
		else
			return (0);
	}
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_sqrt(4));
}
*/
