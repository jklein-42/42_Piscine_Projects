#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	pro_argc00;
	int	pro_argc01;

	pro_argc00 = 0;
	pro_argc01 = 0;
	while (++pro_argc00 < argc)
	{
		while (argv[pro_argc00][pro_argc01])
		{
			write (1, &argv[pro_argc00][pro_argc01++], 1);
		}
		write (1, &"\n", 1);
		pro_argc01 = 0;
	}
	return (0);
}
