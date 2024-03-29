#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & src);
	~FragTrap();

	FragTrap const & operator=(FragTrap const & rhs);

	void highFivesGuys(void);
};

#endif