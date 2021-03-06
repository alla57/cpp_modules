#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP
# include "Contact.class.hpp"

class PhoneBook{

	public :

	PhoneBook(void);
	~PhoneBook(void);

	void	setContact(void);
	void	getContact(void) const;
	void	getAllContacts(void) const;

	private :

	int 		NOfContacts;
	Contact		Contacts[8]; //mettre dans private pour tester si les constructors se lancent au demarrage de main()
};

#endif