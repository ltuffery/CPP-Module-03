#include "DiamondTrap.h"
#include "ClapTrap.h"
#include "FragTrap.h"
#include "ScavTrap.h"
#include <string>

DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_trap") {
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap") {
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap(void) {
}
