#include "module_1.h"
#include <iostream>
int fun_1(int i) {
	int cel_per = 0;
	int cel_per_2 = 1;
	cel_per_2 = 1;
	std::cout << "\n" << "Vvedite celoe 4islo = ";
	std::cin >> cel_per;
	do {
		if (cel_per < 0 && cel_per >99999) {
			std::cout << "\n" << "Vvedite 4islo korrektno v diapozone ot 1 do 99999 = ";
			std::cin >> cel_per;
		}
		else {
			cel_per_2 = 0;
		}
	} while (cel_per_2!=0);
	std::cout << "\n" << "Vuvod vse celuh 4isel = " << "\n";
	for (int i = 1; i <= 99999; i++) {
		if (i%cel_per == 0) {
			std::cout << "\n" << i;
		}
	}
	return 1;
}