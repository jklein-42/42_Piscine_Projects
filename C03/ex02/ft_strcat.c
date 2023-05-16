char	*ft_strcat(char *dest, char *src)
{
	char	*str;

	str = dest;
	while (*dest != '\0')
		++dest;
	while (*src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = '\0';
	return (str);
}
/*
#include<stdio.h>
int	main()
{
	char str00[13] = "Block maker";
	char str01[18] = "Mindcraft hacker";
	char str02[13] = "Hello World";
	char str03[22] = "The mindcraft blocks";

	printf("Hello world-The mindcraft blocks %s\n", ft_strcat(str02, str03));
	printf("Block maker-Mindcraft hacker %s\n", ft_strcat(str00, str01));
	printf("Mindcraft hacker-Block maker %s\n", ft_strcat(str01, str00));
}*/
