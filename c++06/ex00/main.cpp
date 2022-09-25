#include <iostream>
#include "Convers.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong count of arguments!" << std::endl;
		return (0);
	}
	Convers str(argv[1]);

	str.printChar();
	str.printInt();
	str.printFloat();
	str.printDouble();
	return (0);
}
