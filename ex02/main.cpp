#include "ClapTrap.h"
#include "ScavTrap.h"
#include <iostream>

int main() {
	ScavTrap scav("clap");
	ClapTrap clap("trap");

	scav.attack("trap");
	clap.takeDamage(20);
	for (int i = 0; i < 10; i++) {
		clap.beRepaired(1);
	}
	clap.attack("clap");
}
