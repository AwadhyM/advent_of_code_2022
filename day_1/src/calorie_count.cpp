#include "calorie_count.hpp"

uint32_t part_1::find_highest_number_of_calories(std::vector<std::string> const &file_contents) {
		uint32_t counter = 0;
		uint32_t highest = 0;
			for (std::string const &line : file_contents) {
				if (line.empty()) {
					highest = std::max(counter, highest);
					counter = 0;
				} else {
					counter += stoi(line);
				}
		}
		return highest;
	}

uint32_t part_2::find_sum_three_highest_calories(std::vector<std::string> const &file_contents) {
	uint32_t counter = 0;
	std::priority_queue<uint32_t> max_heap;
		for (std::string const &line : file_contents) {
			if (line.empty()) {
				max_heap.push(counter);
				counter = 0;
			} else {
				counter += stoi(line);
			}
		}
		return calculate_sum_top_three_calories(max_heap);
	}

uint32_t part_2::calculate_sum_top_three_calories(std::priority_queue<uint32_t> &max_heap) {
	int counter = 0;
	for (int i = 0; i < 3; i++) {
		counter += max_heap.top();
		max_heap.pop();
	}
	return counter;
}

