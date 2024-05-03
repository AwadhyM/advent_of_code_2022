#include <iostream>
#include "calorie_count.hpp"

int main(int argc, char *argv[]) {

	if (argc != 2) {
		std::cout << "Incorrect usage. Terminating programme." << std::endl;
		return 1;
	}

	std::string file_name = argv[1];

	std::cout << part_1::find_highest_number_of_calories(file_name) << "\n";
	std::cout << part_2::find_sum_three_highest_calories(file_name) << std::endl;

	return 0;
}
