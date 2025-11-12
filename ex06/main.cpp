#include <iostream>
#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage ./harlFilter <arg>" << std::endl;
		return (1);
	}
	Harl		harl;
	int			index = -1;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	level = av[1];

	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			index = i;
	switch (index)
	{
		case 0:
			harl.complain("DEBUG");
			/* fall through */
		case 1:
			harl.complain("INFO");
			/* fall through */
		case 2:
			harl.complain("WARNING");
			/* fall through */
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout
				<< "[ Probably complaining about insignificant problems ]\n"
				<< std::endl;
	}
	return (0);
}
