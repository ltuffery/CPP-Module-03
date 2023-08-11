#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap: public virtual ClapTrap {
	
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		~FragTrap(void);
		void highFivesGuys(void);

};

#endif
