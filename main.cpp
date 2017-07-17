#include "module_1.h"
#include "module_2.h"
#include "module_3.h"
#include <iostream>
#include <stdio.h>

int main() {

	int flag_menu = 1;
	while (flag_menu != 0) {
		std::cout << "\n" << "vvedite nomer zada4i : 1...n 0-vugod" << "\n";
		std::cin >> flag_menu;
		if (flag_menu == 1) {
			fun_1(1);

		}
		if (flag_menu == 2) {
			fun_2(1);
		}
		if (flag_menu == 3) {
			fun_3(1);
		}
		if (flag_menu == 4) {

		}
	}
	system("pause");
	return 0;
}