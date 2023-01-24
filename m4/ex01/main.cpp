#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

	std::cout << "/*** check brain ***/" << std::endl;
	Dog *dog = new Dog();
	dog->getBrain()->addIdea("Walk");
	dog->getBrain()->addIdea("Run");
	Cat *cat = new Cat();
	cat->getBrain()->addIdea("Sleep");
	cat->getBrain()->addIdea("Jump");
	std::cout << "-- dog ideas --" << std::endl;
	dog->getBrain()->printAllIdeas();
	std::cout << "-- cat ideas --" << std::endl;
	cat->getBrain()->printAllIdeas();
	delete dog;
	delete cat;

	std::cout << "\n/*** check brain deep copy ***/" << std::endl;
	Dog *d1 = new Dog();
	d1->getBrain()->addIdea("Walk");
	d1->getBrain()->addIdea("Run");
	Dog *d2 = new Dog(*d1);
	d1->getBrain()->addIdea("D1");
	d2->getBrain()->addIdea("D2");
	std::cout << "-- d1 ideas --" << std::endl;
	d1->getBrain()->printAllIdeas();
	std::cout << "-- d2 ideas --" << std::endl;
	d2->getBrain()->printAllIdeas();
	delete d1;
	delete d2;

	Animal* arrayAnimal[4];
	std::cout << "\n/*** constructors ***/" << std::endl;
	for (int i = 0; i < 4;) {
		arrayAnimal[i++] = new Dog();
		arrayAnimal[i++] = new Cat();
	}

	std::cout << "\n/*** destructors ***/" << std::endl;
	for (int i = 0; i < 4;)
		delete arrayAnimal[i++];

	return 0;
}
