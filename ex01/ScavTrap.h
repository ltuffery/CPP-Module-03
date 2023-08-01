#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.h"
#include <string>

class ScavTrap : public ClapTrap {

	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &scavTrap);
		~ScavTrap(void);
		void guardGate();
		void attack(const std::string &target);

};

#endif
