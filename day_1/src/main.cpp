#include <iostream>
#include "calorie_count.hpp"
#include "utils.hpp"

int main(int argc, char *argv[]) {

	if (argc != 2) {
		std::cout << "Incorrect usage. Terminating programme." << std::endl;
		return 1;
	}

	std::string file_name = argv[1];
	std::cout << argv[1] << std::endl;
	std::vector<std::string> file_contents = get_contents_of_file(file_name);

	std::cout << part_1::find_highest_number_of_calories(file_contents) << "\n";
	std::cout << part_2::find_sum_three_highest_calories(file_contents) << std::endl;

	return 0;
}
