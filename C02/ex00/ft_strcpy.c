char	*ft_strcpy(char *dest, char *src)
{
	int	str;

	str = 0;
	while (src[str] != '\0')
	{
		dest[str] = src[str];
		str++;
	}
	dest[str] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char 	String[] = "The fox jumped over the fence";
	char	Location[12];
	printf("String Before: %s\n", Location);
	printf("String After: %s\n", String);
	ft_strcpy(Location, String);

	return (0);
}*/
