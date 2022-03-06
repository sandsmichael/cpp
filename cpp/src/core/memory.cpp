
// a pointer is an address in memory

#include "iostream"


int Memory() {

	int var = 8; 
	int* ptr = &var; //ptr var holds memory address of as int type of our variable var
	std::cout << ptr << std::endl;

	*ptr = 10;
	std::cout << *ptr << std::endl;

	std::cin.get();

	return var;
} 


void Remember(int ptr) {

	std::cout << ptr << std::endl;

}