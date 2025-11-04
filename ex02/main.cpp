#include <string>
#include <iostream>

int	main(void)
{
	std::string		var = "HI THIS IS BRAIN";
	std::string*	stringPTR = &var;
	std::string&	stringREF = var;

	std::cout << "\033[1;32m"
		<< "&var = " << &var << "\n"
		<< "stringPTR = " << stringPTR << "\n"
		<< "stringREF = " << (void*)&stringREF << "\n"
		<< "\033[0m" << std::endl;
	
	std::cout << "\n"
		<< "\033[1;32m"
		<< "var = " << var << "\n"
		<< "stringPTR value pointed = " << *stringPTR << "\n"
		<< "stringREF value pointed = " << stringREF << "\n"
		<< "\033[0m" << std::endl;
}
