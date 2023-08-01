#include "ClapTrap.h"
#include <iostream>
#include <ostream>
#include <functional>

ClapTrap::ClapTrap( std::string name ) {
	std::cout << "Constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		std::cout 
			<< "ClapTrap " << this->_name
			<< " attacks " << target
			<< ", causing " << this->_attackDamage
			<< " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout 
		<< "ClapTrap " << this->_name
		<< " took " << amount 
		<< " damage" << std::endl;
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		std::cout
			<< "ClapTrap " << this->_name
			<< " regained " << amount
			<< " hit points" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
	}
}
