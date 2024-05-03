#include "calorie_count.hpp"

uint32_t part_1::find_highest_number_of_calories(std::string &file_name) {
		std::ifstream file(file_name);
		std::string line;
		uint32_t counter, highest = 0;
		if (file.is_open()) {
			while (getline(file, line)) {
				if (!line.empty()) {
					counter += stoi(line);
				} else {
					highest = std::max(counter, highest);
					counter = 0;
				}
			}
		}
		file.close();
		return highest;
	}

uint32_t part_2::find_sum_three_highest_calories(std::string &file_name) {
	std::ifstream file(file_name);
	std::string line;
	uint32_t counter, highest = 0;
	std::priority_queue<uint32_t> max_heap;
	if (file.is_open()) {
		while (getline (file, line)) {
			if (!line.empty()) {
				counter += stoi(line);
			} else {
				max_heap.push(counter);
				counter = 0;
			}
		}
		file.close();
		return calculate_sum_top_three_calories(max_heap);
	}
	file.close();
	return 0;
}

uint32_t part_2::calculate_sum_top_three_calories(std::priority_queue<uint32_t> max_heap) {
	int counter = 0;
	for (int i = 0; i < 3; i++) {
		counter += max_heap.top();
		max_heap.pop();
	}
	return counter;
}

