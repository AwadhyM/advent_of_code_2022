#include "utils.hpp"

std::vector<std::string> get_contents_of_file(std::string &file_name) {
	std::ifstream file(file_name);
	std::string line;
	std::vector<std::string> file_contents;
	if (file.is_open()) {
		while (getline(file,line)) {
			file_contents.push_back(line);
		}
	}
	file.close();
	return file_contents;
}
