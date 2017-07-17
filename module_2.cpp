#include "module_2.h"
#include <iostream>
int fun_2(int i) {
	int cel_per = 0;
	int cel_per_2 = 1;
	int cel_per_3 = 0;
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
	} while (cel_per_2 != 0);
	std::cout << "\n" << "vvedite vtoroe 4islo = ";
	std::cin >> cel_per_3;
	cel_per_2 = 1;
	do {
		if (cel_per_3 < 0 && cel_per_3 >99999) {
			std::cout << "\n" << "Vvedite 4islo korrektno v diapozone ot 1 do 99999 = ";
			std::cin >> cel_per_3;
		}
		else {
			cel_per_2 = 0;
		}
	} while (cel_per_2 != 0);

	std::cout << "\n" << "Vuvod vse celuh 4isel = " << "\n";
	for (int i = 1; i <= 99999; i++) {
		if (i%cel_per == 0 && i%cel_per_3==0) {
			std::cout << "\n" << i;
		}
	}

	return 1;
}