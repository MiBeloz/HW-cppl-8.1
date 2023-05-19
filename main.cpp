#include <iostream>
#include <vector>
#include <algorithm>


void print_vector(const std::vector<int>& vector);

int main() {
	setlocale(LC_ALL, "ru");
	std::cout << "\tУникальный вектор\n" << std::endl;

	std::vector<int> vector{ 1, 1, 2, 5, 6, 1, 2, 4 };

	std::cout << "[IN]: ";
	print_vector(vector);

	std::sort(vector.begin(), vector.end());

	auto it = std::unique(vector.begin(), vector.end());
	vector.erase(it, vector.end());

	std::cout << "[OUT]: ";
	print_vector(vector);

	system("pause > nul");
	return 0;
}

void print_vector(const std::vector<int>& vector) {
	for (const auto& it : vector) {
		std::cout << it << " ";
	}
	std::cout << std::endl;
}
