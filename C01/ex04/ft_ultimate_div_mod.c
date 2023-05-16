void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <unistd.h>
#include <stdio.h>
int main(void)
{
	int a;
	int b;	

	a = 21;
	b = 2;

	printf("Before a: %d\n", a);
	printf("Before b: %d\n", b);
	
		ft_ultimate_div_mod(&a, &b);

	printf("After a: %d\n", a);
	printf("After b: %d\n", b);
}*/
