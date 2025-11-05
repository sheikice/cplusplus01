#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(const std::string& name): _name(name), _weapon(NULL){
	std::cout << "\033[1;32m"
		<< _name << " was created and it holds nothing"
		<< "\033[0m" << std::endl;
}

HumanB::~HumanB(void) {
	std::cout << "\033[1;31m"
		<< _name << " is destroyed"
		<< "\033[0m" << std::endl;
}

void HumanB::attack(void) const
{
	std::cout << "\033[1;32m"
		<< _name << "attacks with their " << _weapon->getType()
		<< "\033[0m" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
	std::cout << "\033[1;33m"
		<< _name << " now holds " << _weapon->getType()
		<< "\033[0m" << std::endl;
}
