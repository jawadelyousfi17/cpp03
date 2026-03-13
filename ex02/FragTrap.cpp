#include "FragTrap.hpp"



FragTrap::FragTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap default constructor has been called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor has been called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor has been called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_attackDamage = other._attackDamage;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor has been called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (_hitPoints <= 0)
    {
        std::cout << "No enough hit Points to attack"<< std::endl;
        return;
    }
    if (_energyPoints <= 0)
    {
        std::cout << "No enough energy Points to attack"<< std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    if (_hitPoints <= 0) {
        std::cout  << "FragTrap " << _name << " is dead " << std::endl;
    }
    std::cout << "FragTrap " << _name << " high Fives" << std::endl;
}