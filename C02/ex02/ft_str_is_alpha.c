int	ft_str_is_alpha(char *str)
{
	int	strcpy;

	strcpy = 0;
	while (str[strcpy] != '\0')
	{
		if (str[0] == '\0')
		{
			return (1);
		}
		if (str[strcpy] < 'A' || str[strcpy] > 'z'
			|| (str[strcpy] > 'Z' && str[strcpy] < 'a'))
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
	char	string00[1] = {"5"};
	char	string01[1] = {"5"};
	char	string02[1] = {"5"};

	printf("%d\n", ft_str_is_alpha(string00));
	printf("%d\n", ft_str_is_alpha(string01));
	printf("%d\n", ft_str_is_alpha(string02));
}*/
