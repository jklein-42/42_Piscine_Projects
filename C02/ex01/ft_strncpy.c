char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	str;

	str = 0;
	while (src[str] && str < n)
	{
		dest[str] = src[str];
		str++;
	}
	while (str < n)
	{
		dest[str] = '\0';
		str++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char	String[] = "The fox jumped over the fence";
	char	Location[12];

	printf("String location before: %s\n", String);
	printf("The source location before: %s\n", Location);

	ft_strncpy(Location, String, 11);

	printf("String locatioin after: %s\n", String);
	printf("The source location after: %s\n", Location);
}*/
