#include "ClapTrap.h"
#include <iostream>
#include <ostream>
#include <functional>

ClapTrap::ClapTrap( std::string name ) {
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &clapTrap ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (&clapTrap == this) {
		return *this;
	}
	return *this;
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
