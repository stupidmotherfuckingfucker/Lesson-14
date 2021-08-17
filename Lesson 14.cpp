#include <iostream>
#include <string>
#include <iomanip>
#include <stdint.h>

int main()
{
	std::cout << "Enter word or words:" << "\n ";
	std::string word;
	std::cin >> word;
	std::cout << "Your word:" << " " << word << "\n";
	std::cout << "Number of letters:" << " " << word.length() << "\n";
	std::cout << "First letter:" << " " << word.front() << " " << " Last letter" << " " << word.back();


}