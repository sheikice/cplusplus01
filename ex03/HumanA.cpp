#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>


HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	std::cout << "\033[1;32m"
		<< _name << " was created and it holds " << _weapon.getType()
		<< "\033[0m" << std::endl;
}


HumanA::~HumanA(void)
{
	std::cout << "\033[1;31m"
		<< _name << " is destroyed"
		<< "\033[0m" << std::endl;
}

void HumanA::attack(void) const
{
	std::cout << "\033[1;33m"
		<< _name << " attacks with their " << _weapon.getType()
		<< "\033[0m" << std::endl;
}

void	HumanA::setWeapon(const Weapon& weapon)
{
	_weapon = weapon;
	std::cout << "\033[1;33m"
		<< _name << " now holds " << weapon.getType()
		<< "\033[0m" << std::endl;
}
