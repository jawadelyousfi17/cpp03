#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap default constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor has been called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
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

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor has been called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_hitPoints <= 0)
    {
        std::cout << "No enough hit Points to attack" << std::endl;
        return;
    }
    if (_energyPoints <= 0)
    {
        std::cout << "No enough energy Points to attack" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is in Gate keeper mode" << std::endl;
}