#include <iostream>
#include <string>

int main(){

	int input[100];
	int iteration(0);
	std::string line = "";

	while( std::getline( std::cin, line ) && !line.empty() ){

		input[iteration] = 0;
	    std::cin >> input[iteration];

	    iteration++;
	}

	iteration = 0;
	while( input[iteration] != 42 ){

		std::cout << input[iteration] << "\n";
		iteration++;
	}

	return 0;
}
