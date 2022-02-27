#include "stdio.h"
#include "iostream"
//#include "Log.h"
#include "Memory.h"
#include "Round.h"

int main() {

	std::cout << "hello world" << std::endl;


	//InitLog();


	int memptr = { Memory() };

	Remember(memptr);

	float num2 = 2.465f;
	float rounded_float{ _roundf(num2) };
		
}



