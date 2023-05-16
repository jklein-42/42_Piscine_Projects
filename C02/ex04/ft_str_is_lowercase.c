int	ft_str_is_lowercase(char *str)
{
	int	strcpy;

	strcpy = 0;
	while (str[strcpy] != '\0')
	{
		if (str[strcpy] < 'a' || str[strcpy] > 'z' )
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
	char	string00[] = {};
	char	string01[] = {};
	char	string02[5] = {"###"};

	printf("%d\n", ft_str_is_lowercase(string00));
	printf("%d\n", ft_str_is_lowercase(string01));
	printf("%d\n", ft_str_is_lowercase(string02));
}*/
