#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap lifeline("lifeline");
    ScavTrap seer("seer");

    lifeline.takeDamage(20);
    lifeline.attack("pathfinder");
    lifeline.beRepaired(10);
    seer.takeDamage(20);
    seer.attack("pathfinder");
    seer.beRepaired(10);
}