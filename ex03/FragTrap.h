#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap: virtual public ClapTrap {
	
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		~FragTrap(void);
		FragTrap &operator=(const FragTrap &fragTrap);
		void highFivesGuys(void);

};

#endif
