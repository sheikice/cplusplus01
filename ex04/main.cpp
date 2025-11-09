#include <iostream>
#include <cstdlib>
#include "sed.hpp"

int	main(int ac, char **av)
{
	std::string	filename = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];

	if (ac != 4)
	{
		std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	Sed sed(filename);
	if (sed.replace(s1, s2) != EXIT_SUCCESS)
	{
		std::cerr << "Sed has failed\n" << std::endl;
		return (1);
	}
	std::cout
		<< "Sed completed in " << filename << ".replace"
		<< std::endl;
	return (0);
}
