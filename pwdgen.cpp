
#include <iostream>
#include <random>
#include <ctime>


/* this random password generator was one of my first c++ projects ever.
I published this because i think it can be very useful if you dont want to rely on online-tools */


int main() {

	srand(time(NULL)); //for rand() seed

	const char pwchars[73] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '!', '?', '@', '&', '%', '(', ')', '=', '/', ':', '.'}; /* the probability for letters is obviously higher but this makes it probably harder to crack,
	just in case all possible characters are known */

	int length;
	int i;
	
	std::cout << "Hello! to generate a password enter the following --> \n";
	std::cout << "length of password (3-20 characters): \n";
	std::cin >> length;
	
	if (length >= 5 && length <= 20) {

		std::cout << "generating...\n";

		for (int count = 0; count < length; count++) {

			i = std::rand() % 73;
			std::cout << pwchars[i];
		}
		
		int enter;
		std::cin >> enter;
	}

	else {

		std::cout << "error: password length must be between 5-20\n";
	}

	return 0;
}

	
	
