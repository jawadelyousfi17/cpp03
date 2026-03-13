#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void) {

    ScavTrap joe("Joe");
    joe.attack("Victim 2");
    joe.takeDamage(10);
    joe.beRepaired(5);
    joe.guardGate();

    return 0;
}