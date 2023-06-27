#include <iostream>
#include <stdlib.h>
#include "dancingrobot.hpp"

int main(int argc, char* argv[]) {
	std::cout << "let's dance!\n";
	char* input;
	if (argc < 2) {
		std::cout << "missing input argument postion\n";
	//	input = "0".c_str();
	        const char* d = "0";
	        strcpy(input, d);
	}
	else {
		input = argv[1];
	}
	int step = strtol(input, NULL, 10);
	int position = FindDancePosition(step);
	std::cout << "Dance position:" << position <<"\n";
	return 0;
}
