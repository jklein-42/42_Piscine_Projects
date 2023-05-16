int	char_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}	

char	*ft_strupcase(char *str)
{
	unsigned int	strcpy;

	strcpy = 0;
	while (str[strcpy])
	{
		if (char_is_lower(str[strcpy]))
			str[strcpy] = str[strcpy] - 32;
		strcpy++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char	fox_a[] = "The fox jumped over the fence";
	char	fox_b[] = "The fox jumped";

	ft_strupcase(fox_a);
	ft_strupcase(fox_b);

	printf("The fox jumped over the fence: %s\n", fox_a);
	printf("The fox jumped: %s\n", fox_b);
}*/
