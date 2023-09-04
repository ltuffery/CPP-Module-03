#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"
#include "DiamondTrap.h"
#include <iostream>

int main() {
	ScavTrap scav("clap");
	ClapTrap clap("trap");
	FragTrap frag("frag");

	scav.attack("trap");
	clap.takeDamage(20);
	for (int i = 0; i < 10; i++) {
		clap.beRepaired(1);
	}
	clap.attack("trap");
	frag.attack("clap");
	scav.takeDamage(30);
	scav.attack("frag");
	frag.takeDamage(20);
	frag.highFivesGuys();
	DiamondTrap dd("dd");

	dd.attack("frag");
	dd.whoAmI();

	DiamondTrap ddd(dd);
	ddd.whoAmI();
	ddd.attack("clap");
}
