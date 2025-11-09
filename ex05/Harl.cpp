#include "Harl.hpp"
#include <iostream>

Harl::Harl(void){ };

Harl::~Harl(void){ };

void	Harl::complain(std::string level) const
{
	typedef void (Harl::*_ptrFn)(void) const;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	_ptrFn		actions[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*actions[i])();
			return ;
		}
	}
}

void	Harl::_debug(void) const
{
	std::cout << "I love having extra bacon for my"
		<< "7XL-double-cheese-triple-pickle-specialketchup burger."
		<< "I really do!" << std::endl;
}
void	Harl::_info(void) const
{
	std::cout <<  "I cannot believe adding extra bacon costs more money."
		<< "You didn’t put enough bacon in my burger! If you did,"
		<< "I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free."
		<< "I’ve been coming for years, whereas you started working here"
		<< "just last month." << std::endl;
}

void	Harl::_error(void) const
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}
