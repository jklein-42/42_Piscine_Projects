void	ft_swap(int *a, int *b)
{
	int	num;

	num = *a;
	*a = *b;
	*b = num;
}
/*
#include <stdio.h>
int main(void)
{
	int a;
	int b;

	a = 100;
	b = 42;

	printf("before: %d\n", a);
	printf("before: %d\n", b);

	ft_swap(&a, &b);

	printf("after: %d\n", a);
	printf("after: %d\n", b);

	return (0);
}*/
