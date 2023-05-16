int	ft_str_is_numeric(char *str)
{
	int	strcpy;

	strcpy = 0;
	while (str[strcpy] != '\0')
	{
		if (str[strcpy] == '\0')
		{
			return (1);
		}
		if (str[strcpy] <= '0' || str[strcpy] >= '9')
		{
			return (0);
		}
		strcpy++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	char	string00[5] = {"Fox"};
	char	string01[5] = {"Fox"};
	char	string02[5] = {"Fox"};

	printf("%d\n", ft_str_is_numeric(string00));
	printf("%d\n", ft_str_is_numeric(string01));
	printf("%d\n", ft_str_is_numeric(string02));
}*/
