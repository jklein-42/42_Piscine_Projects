int	ft_strcmp(char	*s1, char	*s2)
{
	if (s1 == s2)
		return (0);
	while (*s1 == *s2)
	{
		s2++;
		if (*s1 == 0)
			return (0);
		s1++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str00 = "Block maker";
	char *str01 = "Mindcraft hacker";
	char *str02 = "Hello world";
	char *str03 = "The mindcraft blocks";

	printf("Block maker - Mindcraft hacker: %d\n", ft_strcmp(str00, str01));
	printf("The mindcraft blocks - Hello world: %d\n", ft_strcmp(str03, str02));
	printf("Hello world - Mindcraft hacker: %d\n", ft_strcmp(str02, str01));
	printf("Hello world - The mindcraft blocks: %d\n", ft_strcmp(str02, str03)); 
}*/
