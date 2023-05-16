char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	str00;
	unsigned int	str01;

	str00 = 0;
	str01 = 0;
	while (dest[str00] != '\0')
	{
		str00++;
	}
	while (str01 < nb && src[str01])
	{
		dest[str00] = src[str01];
		str00++;
		str01++;
	}
	dest[str00] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int	main()
{
	char str00[25] = " Mindcraft hacker ";
	char str01[25] = " Block builder ";

	printf("Mindcraft hacker Block builder: %s\n", ft_strncat(str00, str01, 40));
	printf("Block builder Mindcraft hacker: %s\n", ft_strncat(str01, str00, 40));
}*/
