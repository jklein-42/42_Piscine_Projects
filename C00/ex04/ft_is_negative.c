#include <unistd.h>
void	ft_is_negative(int n)
{
	int		N;
	int		P;

	N = 'N';
	P = 'P';
	{
		if (n >= 0)
			write(1, &P, 1);
		if (n < 0)
			write(1, &N, 1);
	}
}
/*
int	main(void)
{	
	ft_is_negative(-1);
	return (0);
}*/
