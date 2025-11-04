#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name)
{
	setName(name);
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "\033[1;31m"
		<< _name << " is destroyed."
		<< "\033[0m" << std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << "\033[1;32m"
		<< this->_name << ": BraiiiiiiinnnzzzZ..."
		<< "\033[0m" << std::endl;
	return ;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	return ;
}
