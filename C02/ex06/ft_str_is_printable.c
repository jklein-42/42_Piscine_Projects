int	ft_str_is_printable(char *str)
{
	int	strcpy;

	strcpy = 0;
	while (str[strcpy] != '\0')
	{
		if (str[strcpy] == '\0')
		{
			return (1);
		}
		if (str[strcpy] < 32 || str[strcpy] > 126)
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

	printf("%d\n", ft_str_is_printable(string00));
	printf("%d\n", ft_str_is_printable(string01));
	printf("%d\n", ft_str_is_printable(string02));
*/
