#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	strcpy;

	strcpy = 0;
	while (str[strcpy] != '\0')
	{
		write(1, &str[strcpy], 1);
		++strcpy;
	}
}
/*
int	main(void)
{
	char	str[50] = "The fox jumped over the fence";
	ft_putstr(str);
}*/
