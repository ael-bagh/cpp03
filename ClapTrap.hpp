#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap( ClapTrap const & src );
		~ClapTrap();
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap &		operator=( ClapTrap const & rhs );

	private:
		std::string _name;
		unsigned int			_hitPoints;
		unsigned int			_attackDamage;


};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */