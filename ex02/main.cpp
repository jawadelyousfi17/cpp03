#include "ClapTrap.hpp"
#include "FragTrap.hpp"


int main(void) {
    FragTrap joe("Joe");
    joe.attack("Victim 2");
    joe.takeDamage(10);
    joe.beRepaired(5);
    joe.highFivesGuys();

    return 0;
}