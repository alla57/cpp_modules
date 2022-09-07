#include "Ice.hpp"
#include <iostream>

//			CONSTRUCTORS

Ice::Ice() : AMateria("ice"){
	std::cout << "Ice default constructor called" << std::endl;
	return ;
}

Ice::Ice(Ice const & src) : AMateria("ice"){
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
	return ;
}

Ice::~Ice(){
	std::cout << "Ice destructor called" << std::endl;
	return ;
}

Ice const & Ice::operator=(Ice const & rhs){
	if (this == &rhs)
		return (*this);
	return (*this);
}

//			METHODS

AMateria*	Ice::clone() const
{
	return (new Ice);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}