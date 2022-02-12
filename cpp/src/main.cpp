#include "stdio.h"
#include "iostream"
#include "Log.h"

int main() {

	std::cout << "hello world" << std::endl;

	int i = 0;
	while (i < 11)
	{
		if (i + 2 % 2 == 4) {
			std::cout << i << std::endl;

			for (int i = 0; i < 2; i++)
			{
				std::cout << i << "- 0_0" << std::endl;
				continue;
			}
			break;
		}
		i++;
	}

	InitLog();

		
}



