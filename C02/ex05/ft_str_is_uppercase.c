int	ft_str_is_uppercase(char *str)
{
	int	strcpy;

	strcpy = 0;
	while (str[strcpy] != '\0')
	{
		if (str[0] == '\0')
		{
			return (1);
		}
		if (str[strcpy] < 'A' || str[strcpy] > 'Z')
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
	char	string00[10] = {"fox"};
	char	string01[10] = {"fox"};
	char	string02[10] = {"fox"};
	
	printf("%d\n", ft_str_is_uppercase(string00));
	printf("%d\n", ft_str_is_uppercase(string01));
	printf("%d\n", ft_str_is_uppercase(string02));
}*/
