#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap lifeline("lifeline");
    ScavTrap seer("seer");
    std::cout << "lifeline (clap) stats:\n" << lifeline << std::endl;
    std::cout << "seer (scav) stats:\n" << seer << std::endl;
    lifeline.takeDamage(20);
    lifeline.attack("pathfinder");
    lifeline.beRepaired(10);
    seer.takeDamage(20);
    seer.attack("pathfinder");
    seer.beRepaired(10);
    seer.guardGate();
}