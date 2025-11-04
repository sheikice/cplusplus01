#include "Zombie.hpp"

int main(void)
{
	Zombie	zombieA("Arraa");
	Zombie*	zombieB;
	Zombie* zombies;

	zombieB = newZombie("Boaaaa");
	delete zombieB;
	randomChump("Chaaaaae");
	
	zombies = zombieHorde(10, "Cesar");
	for (int i = 0; i < 10; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}
