#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while (z >= 97 && z <= 122)
	{
		write(1, &z, 1);
		z--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
