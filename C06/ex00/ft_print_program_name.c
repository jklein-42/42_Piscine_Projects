#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	Program_00;

	if (argc == 1)
	{
		Program_00 = -1;
		while (argv[0][++Program_00])
		{
			write (1, &argv[0][Program_00], 1);
		}
		write (1, &"\n", 1);
	}
	return (0);
}
