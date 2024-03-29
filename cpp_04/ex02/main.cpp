#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	{
		AAnimal *animalTab[2];
		int i = -1;
		while (++i < 1)
		{
			animalTab[i] = new Dog;
		}
		while (i < 2)
		{
			animalTab[i++] = new Cat;
		}
		i = 0;
		while (i < 2)
			delete animalTab[i++];
		std::cout << std::endl;
	}
	{
		Dog *chien = new Dog();
		Dog *chien2 = new Dog();

		std::cout << chien->getBrain()->getIdea(0) << std::endl;

		chien->setBrainIdea("bonjour", 0);
		std::cout << chien->getBrain()->getIdea(0) << std::endl;

		std::cout << chien2->getBrain()->getIdea(0) << std::endl;

		Cat *chat = new Cat();
		Cat *chat2 = new Cat();

		std::cout << chat->getBrain()->getIdea(0) << std::endl;
		chat->setBrainIdea("au revoir", 0);
		std::cout << chat->getBrain()->getIdea(0) << std::endl;	
		std::cout << chat2->getBrain()->getIdea(0) << std::endl;

		delete chien;
		delete chien2;
		delete chat;
		delete chat2;
		return (0);
	}
}