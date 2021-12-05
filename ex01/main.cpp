#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
std::cout << "_______________________construction______________________" << std::endl;
    ClapTrap lifeline("lifeline");
    ScavTrap seer("seer");
    std::cout << "___________________________stats_________________________" << std::endl;
    std::cout << "lifeline (clap) stats:\n" << lifeline << std::endl;
    std::cout << "seer (scav) stats:\n" << seer << std::endl;
    std::cout << "__________________super class methods_____________________" << std::endl;
    lifeline.takeDamage(20);
    lifeline.beRepaired(10);
    seer.takeDamage(20);
    seer.beRepaired(10);
    std::cout << "__________________Attack functions_____________________" << std::endl;
    lifeline.attack("pathfinder");
    seer.attack("lifeline");
    std::cout << "__________________specific functions_____________________" << std::endl;
    seer.guardGate();
    std::cout << "_______________________destruction_______________________" << std::endl;
}