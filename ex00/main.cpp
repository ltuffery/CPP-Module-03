#include "ClapTrap.h"

int main() {
	ClapTrap clap("clap");
	ClapTrap trap("trap");

	clap.attack("trap");
	trap.takeDamage(0);
	for (int i = 0; i < 10; i++) {
		trap.beRepaired(1);
	}
	trap.attack("clap");
}
