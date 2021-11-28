#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "_______________________construction______________________" << std::endl;
    ClapTrap lifeline("lifeline");
    ScavTrap seer("seer");
    FragTrap mirage("mirage");
    std::cout << "___________________________stats_________________________" << std::endl;
    std::cout << "lifeline (clap) stats:\n" << lifeline << std::endl;
    std::cout << "seer (scav) stats:\n" << seer << std::endl;
    std::cout << "mirage (frag) stats:\n" << mirage << std::endl;
    std::cout << "__________________super class methods_____________________" << std::endl;
    lifeline.takeDamage(20);
    lifeline.attack("pathfinder");
    lifeline.beRepaired(10);
    seer.takeDamage(20);
    seer.attack("lifeline");
    seer.beRepaired(10);
    mirage.takeDamage(20);
    mirage.attack("mirage");
    mirage.beRepaired(10);
    std::cout << "__________________specific functions_____________________" << std::endl;
    mirage.highFivesGuys();
    seer.guardGate();
    std::cout << "_______________________destruction_______________________" << std::endl;
}