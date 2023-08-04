#include <cstdlib>
#include <vector>
// #include <iostream>
#include <queue>
#include "dancingrobot.hpp"


int FindDancePosition(int position) {

	int i = 0;
	int current_position = 0;
	// std::vector<int> previous_changes;
	std::queue<int> previous_changes;

	while (i < abs(position)) {
		if (i > 1) {
			// std::cout << "at position " << i << " subtracting " << previous_changes[1] << " - " <<  previous_changes[0] << std::endl;
			int change_before_last = previous_changes.front();
			previous_changes.pop();
			int last_change = previous_changes.front();
			previous_changes.pop();
			int delta = last_change - change_before_last;
			current_position += delta;
			previous_changes.push(last_change);
			previous_changes.push(delta);
		}
		else if (i == 0) {
			current_position++;
			previous_changes.push(1);
		}
		else if (i == 1) {
			current_position -= 2;
			previous_changes.push(-2);
		}
		i++;
	}

	return current_position;
}

