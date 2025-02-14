#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"

int main() {

	Dog d = Dog();
	Animal *a { &d };
	(*a).speak();

	return 0;
}
