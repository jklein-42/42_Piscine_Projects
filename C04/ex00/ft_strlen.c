int	ft_strlen(char	*str)
{
	int	strcpy;

	strcpy = 0;
	while (str[strcpy] != '\0')
	{
		++strcpy;
	}
	return (strcpy);
}
/*
#include <stdio.h>
int main(void)
{
	char string00[] = "The fox jumped over the fence";
	printf("%d\n", ft_strlen(string00));
}*/
