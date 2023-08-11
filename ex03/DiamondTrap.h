#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap {
	
	private:
		std::string _name;
	
	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap(const std::string name);
		~DiamondTrap(void);
		DiamondTrap &operator=(const DiamondTrap &src);
		void whoAmI(void);
		using ScavTrap::attack;

};

#endif
