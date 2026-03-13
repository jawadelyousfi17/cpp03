#include "ClapTrap.hpp"


int main(void) {
    ClapTrap bob("Bob");

    bob.attack("Vivtim 1");

    bob.takeDamage(2);
    bob.attack("Vivtim 2");
    bob.beRepaired(5);
    bob.takeDamage(50);
    bob.attack("Victim 3");
    bob.beRepaired(25);

    return 0;
}