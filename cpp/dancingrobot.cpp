#include <cstdlib>
#include <vector>
// #include <iostream>
#include "dancingrobot.hpp"

int FindDancePosition(int position) {

	int i = 0;
	int current_position = 0;
	std::vector<int> previous_changes;

	while (i < abs(position)) {
		if (i > 1) {
			// std::cout << "at position " << i << " subtracting " << previous_changes[1] << " - " <<  previous_changes[0] << std::endl;
			int delta = previous_changes[1] - previous_changes[0];
			current_position += delta;
			int last_change = previous_changes[1];
			previous_changes.pop_back();
			previous_changes.pop_back();
			previous_changes.push_back(last_change);
			previous_changes.push_back(delta);
		}
		else if (i == 0) {
			current_position++;
			previous_changes.push_back(1);
		}
		else if (i == 1) {
			current_position -= 2;
			previous_changes.push_back(-2);
		}
		i++;
	}

	return current_position;
}

