#ifndef CALORIE_COUNT
#define CALORIE_COUNT

#include <iostream>
#include <fstream>
#include <queue>

namespace part_1 {
	uint32_t find_highest_number_of_calories(std::vector<std::string> const &file_contents);
}

namespace part_2 {
	uint32_t find_sum_three_highest_calories(std::vector<std::string> const &file_contents);
	uint32_t calculate_sum_top_three_calories(std::priority_queue<uint32_t> &max_heap);
}

#endif //CALORIE_COUNT
