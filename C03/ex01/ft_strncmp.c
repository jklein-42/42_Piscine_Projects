int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	str;

	str = 0;
	while ((s1[str] || s2[str]) && (str < n))
	{
		if (s1[str] < s2[str])
		{
			return (-1);
		}
		else if (s1[str] > s2[str])
		{
			return (1);
		}
		str++;
	}
	return (0);
}	
/*
#include<stdio.h>
int	main()
{
	char *str00 = "Block maker";
	char *str01 = "Mindcraft hacker";
	char *str02 = "Hello world";
	char *str03 = "The mindcraft blocks";

	printf("The mindcraft blocks-Block maker %d\n", ft_strncmp(str03, str00, 50));
	printf("Block maker-the mindcraft blocks %d\n", ft_strncmp(str00, str03, 50));
	printf("Mindcraft hacker-Hello world %d\n", ft_strncmp(str01, str02, 50));
	return (0);
}*/
