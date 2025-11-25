#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon() : _type("")
{
	std::cout << "\033[1;32m"
		"The weapon "<< _type << " was constructed"
		<< "\033[0m" << std::endl;
}
Weapon::Weapon(const std::string& type): _type(type)
{
	std::cout << "\033[1;32m"
		"The weapon "<< _type << " was constructed"
		<< "\033[0m" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "\033[1;31m"
		"The weapon "<< _type << " was destroyed"
		<< "\033[0m" << std::endl;
}

const std::string& Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(const std::string& newType)
{
	_type = newType;
}
