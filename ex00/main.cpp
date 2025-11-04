#include "Zombie.hpp"

int main(void)
{
	Zombie	zombieA("Arraa");
	Zombie*	zombieB;

	zombieB = newZombie("Boaaaa");
	delete zombieB;
	randomChump("Chaaaaae");
	return (0);
}
