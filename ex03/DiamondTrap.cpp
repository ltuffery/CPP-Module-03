#include "DiamondTrap.h"
#include "ClapTrap.h"
#include "FragTrap.h"
#include "ScavTrap.h"
#include <iostream>
#include <string>


DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_trap") {
	std::cout << "DiamondTrap default constructor" << std::endl;
	this->_name = "default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap") {
	std::cout << "DiamondTrap constructor" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy) {
	std::cout << "DiamondTrap Copy constructor" << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src) {
	if (this == &src)
		return *this;
	this->_name = src._name;
	this->ClapTrap::_name = src.ClapTrap::_name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return *this;
}

void DiamondTrap::whoAmI() {
	std::cout << this->_name << std::endl;
}
