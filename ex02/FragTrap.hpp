#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:
		FragTrap(std::string name);
		FragTrap( FragTrap const & src );
		~FragTrap();
		void highFivesGuys(void);
		void attack(std::string const & target);
		FragTrap &		operator=( FragTrap const & rhs );
	private:
		FragTrap();
};

std::ostream &			operator<<( std::ostream & o, FragTrap const & i );

#endif /* ******************************************************** FRAGTRAP_H */