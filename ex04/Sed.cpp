#include "Sed.hpp"
#include <iostream>
#include <cstdlib>
#include <fstream>

Sed::Sed(const std::string& filename) :
	_srcFile(filename), _destFile(filename + ".replace") { }

Sed::~Sed() { }

int	Sed::replace(const std::string& s1, const std::string& s2)
{
	std::ifstream	is(_srcFile.c_str());
	size_t			it = 0;
	size_t			pos = 0;
	size_t			fileSize;

	if (s1.empty())
	{
		std::cerr << "s1 is empty:" << "sed failed" << std::endl;
		return (EXIT_FAILURE);
	}
	if (!is.good())
	{
		std::cerr << "open:" << _srcFile << " failed" << std::endl;
		return (EXIT_FAILURE);
	}
	std::ofstream	os(_destFile.c_str());
	if (!os.good())
	{
		std::cerr << "open:" << _destFile << " failed" << std::endl;
		return (EXIT_FAILURE);
	}

	std::string	fileContent((std::istreambuf_iterator<char>(is)),
                         std::istreambuf_iterator<char>());
	fileSize = fileContent.size();
	while (it < fileSize)
	{
		pos = fileContent.find(s1, it);
		if (pos == std::string::npos)
			pos = fileSize;
		os << fileContent.substr(it, pos - it);
		it = pos + s1.length();
		if (pos < fileSize)
			os << s2;
	}
	return (EXIT_SUCCESS);
}
