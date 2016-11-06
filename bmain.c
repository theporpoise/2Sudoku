#include "sudoku.h"

int		main(int ac, char **av)
{
	if (validate_input(ac, av))
	{
		write(1, "fixme\n", 6);
	//	return (0);
	}

	int		***cube;

	cube = initialize_cube(av);
	print_cube_bools(cube);
	render(cube);

	cube = row_check(cube);
	print_cube_bools(cube);

	cube = eliminate(cube);
	ft_putchar('\n');
	render(cube);
	
	return (0);
}