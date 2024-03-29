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

	/* Below declaration gives you an error as expected.
	Animal *a = new Animal();
	*/

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
