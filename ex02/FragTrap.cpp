#include "ClapTrap.h"
#include "FragTrap.h"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "Hight Fives ?" << std::endl;
}
