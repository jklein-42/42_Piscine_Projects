void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main (void)
{
		int div;
		int mod;
		int a;
		int b;

		a = 42;
		b = 24;
		div = 0;
		mod = 0;
	
	ft_div_mod(a, b, &div, &mod);
		
		printf("a: %d\n", a);
		printf("b: %d\n", b);

		printf("div: %d\n",  div);
		printf("mod: %d\n",  mod);
}*/
