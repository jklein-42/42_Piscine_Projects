int	char_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	unsigned int	strcpy;

	strcpy = 0;
	while (str[strcpy])
	{
		if (char_is_upper (str[strcpy]))
			str[strcpy] = str[strcpy] + 32;
		strcpy++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char	Fox_a[] = "The FOX jumped OVER the fence";
	char	Fox_b[] = "THE FOX JUMPED";
	
	ft_strlowcase(Fox_a);
	ft_strlowcase(Fox_b);
	printf("The fox jumped over the fence: %s\n", Fox_a);
	printf("The fox jumped %s\n", Fox_b);
}*/
