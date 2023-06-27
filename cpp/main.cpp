#include <iostream>

#include "dancingrobot.hpp"

int main() {
	std::cout << "let's dance!\n";
	int position = FindDancePosition(3);
	std::cout << "Dance position:" << position <<"\n";
	return 0;
}
