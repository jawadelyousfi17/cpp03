#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("No name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)

{
    std::cout << "ClapTrap default constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
    std::cout << "ClapTrap copy constructor has been called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
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

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor has been called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
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
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
     if (amount >= (unsigned int)_hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " Took a hit by " << amount << " points of damage!" << std::endl;
}

    void ClapTrap::beRepaired(unsigned int amount){
         if (_hitPoints <= 0)
    {
        std::cout << "No enough hit Points to repair" << std::endl;
        return;
    }
    if (_energyPoints <= 0)
    {
        std::cout << "No enough energy Points to repair"<< std::endl;
        return;
    }
        _energyPoints--;
        _hitPoints += amount;
            std::cout << "ClapTrap " << _name << " repaired itself by adding " << amount << " points to it's health points!" << std::endl;
    }
