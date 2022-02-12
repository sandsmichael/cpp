#include "Log.h"
#include "stdio.h"
#include "iostream"


void InitLog()
{
	Log("logging log logs");
}

void Log(const char* message) {

	std::cout << message << std::endl;

}