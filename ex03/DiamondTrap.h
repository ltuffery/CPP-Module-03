#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap {
	
	private:
		std::string _name;
	

};

#endif
