#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	input_process(int ac, char **av);

int	main(int ac, char **av)
{
	if (input_process(ac, av))
		write(1, "Error\n", 6);
	return (0);
}
