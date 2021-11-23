# include "ClapTrap.hpp"

int main()
{
    ClapTrap lifeline("lifeline");

    lifeline.takeDamage(20);
    lifeline.attack("pathfinder");
    lifeline.beRepaired(10);
}