#include "stdio.h"
#include "iostream"
#include "Log.h"
#include "Memory.h"

int main() {

	std::cout << "hello world" << std::endl;


	InitLog();


	int memptr = { Memory() };

	Remember(memptr);
		
}



