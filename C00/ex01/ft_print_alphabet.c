#include <unistd.h>
void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a >= 97 && a <= 122)
	{
		write(1, &a, 1);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
