#ifndef CALORIE_COUNT
#define CALORIE_COUNT

#include <iostream>
#include <fstream>
#include <queue>

namespace part_1 {
	// Function get the highest number of calories from file
	// file --> int

	uint32_t find_highest_number_of_calories(std::string &file_name);
}

namespace part_2 {
	uint32_t find_sum_three_highest_calories(std::string &file_name);
	uint32_t calculate_sum_top_three_calories(std::priority_queue<uint32_t>);
}

#endif //CALORIE_COUNT
