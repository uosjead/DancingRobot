#include <iostream>
#include <stdlib.h>
#include <cstring>
#include "dancingrobot.hpp"

int main(int argc, char* argv[]) {
	std::cout << "let's dance!\n";
	char** default_argv = new char*[2];
	default_argv[0] = argv[0];
	default_argv[1] = (char*)"0";
	if (argc < 2) {
		std::cout << "missing input argument postion\n";
		argv = default_argv;
	}
	int step = strtol(argv[1], NULL, 10);
	int position = FindDancePosition(step);
	std::cout << "Dance position:" << position <<"\n";
	delete [] default_argv;
	return 0;
}
