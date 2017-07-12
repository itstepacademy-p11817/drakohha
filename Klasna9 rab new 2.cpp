#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include <time.h>

int proizved(int x, int y) {
	return x*y;
}
int yrov_rand(int i) {
	return 1 + rand() % 9;
}
int yrov_rand_2(int i) {
	return 1 + rand() % 99;
}
int kol_cisel() {
	int a = 1000;
	int b = 9999;
	for (int i = 1000; i <= 9999; i++) {
		//if(i/1000 == i/100%10 && i/1000 != i%10)
	}
}

int main() {
	int per_1 = 0;
	int ID = 0;
	long int cel_per_1;
	long int cel_per_2;
	long int cel_per_3;
	int granica_1 = 0;
	int granica_2 = 0;
	int granica_per = 0;
	srand(time(NULL));
	int per_2 = 0;
	long int proizvedenie = 0;
	int kol_vop = 0;
	int yroven = 0;
	int otcenka = 0;
	int flag_menu = 1;
	while (flag_menu != 0) {
		std::cout << "\n"<<"Vvedite nomer zadaci ot 1 do 6, 0 vuhod;" << "\n";
		std::cin >> flag_menu;
		if (flag_menu == 0) {
			break;
		}
		if (flag_menu == 1) {
			std::cout << "\n" << "Tablica ymnoheni9" << "\n";
			kol_vop = 0;
			std::cout << "\n" << "Vubirete yroven slohnosti" << "\n" << "1-legko" << "\n" << "2-slohno" << "\n";
			yroven = 0;
			while (yroven != 1 && yroven != 2) {
				std::cin >> yroven;
			}
			if (yroven == 1) {
				//per_1 =yrov_rand(per_1);
				//per_2 =yrov_rand(per_2);
				kol_vop = 3;
			}
			if (yroven == 2) {
				//per_1 = yrov_rand_2(per_1);
				//per_2 = yrov_rand_2(per_2);
				kol_vop = 5;

			}
			std::cout << "\n" << "Vubran yroven= " << yroven;
			for (int i = 0; i < kol_vop; i++) {
				if (yroven == 1) {
					per_1 = yrov_rand(per_1);
					per_2 = yrov_rand(per_2);
					
				}
				if (yroven == 2) {
					per_1 = yrov_rand_2(per_1);
					per_2 = yrov_rand_2(per_2);
					

				}
				std::cout << "\n" << "Vubranu 4isla = " << per_1 << " i 4islo = " << per_2 << "\n";
				std::cout << "\n" << "vvedite ix proizvedenie = ";
				std::cin >> proizvedenie;
				if (proizvedenie == proizved(per_1, per_2)) {
					otcenka++;
					std::cout << "\n" << "Otvet vernii" << "\n";
				}
				else {
					std::cout << "\n" << "otvet ne verni , veenii budet = " << proizved(per_1, per_2);
					otcenka--;
				}
			}
			std::cout << "\n" << "Vaha otsenka = " << otcenka << "\n";

		}
		if (flag_menu == 2) {
			
			std::cout << "\n" << "Romb na akran" << "\n";
			granica_1 = 1;
			granica_2 = 10;
			granica_per = granica_2;
			for (int j = 1; j <= 10; j++) {
				for (int i = granica_1; i <= granica_per; i++) {
					std::cout << " ";
					if (i == (granica_per / 2) ) {
						std::cout << "*";
						granica_per--;
						
					}

				}
				std::cout << "\n";
			}
		}


		if (flag_menu == 3) {
			std::cout << "\n" << "Vvedite luboe 4islo= ";
			std::cin >> cel_per_1;
			std::cout << "\n" << "Vvedenoe 4islo= " << cel_per_1;
			std::cout << "\n" << "Ydal9em 4ifru 3 i 6 i budet 4islo= ";
			ID = 1;
			int ind = 1;
			cel_per_3 = cel_per_1;
			do {
				
				if (cel_per_3 / 10 != 0) {
					ind++;
					cel_per_3 = cel_per_3 / 10;
					//test
				//	std::cout <<"\n"<< cel_per_3;
				}
				else {
					ID = 0;
				}
				
			} while (ID != 0);
			std::cout << "\n" << "4iferek v 4isle = " << ind << "\n";
			int t = 10;
			t = 10;
			for (int j = 1; j <= ind-2; j++) {
				t = t * 10;
			}
			for (int i = ind; i >= 1; i--) {
				
				
				cel_per_3 = (cel_per_1/t);

				cel_per_3 = cel_per_3 % 10;
				t = t / 10;
				if (cel_per_3 !=3 && cel_per_3 !=6) {
					std::cout << cel_per_3;
				}
			}
			
		}
		if (flag_menu == 4) {
			std::cout << "\n" << "Pods4et 4isel:" << "\n";
			
		}
	}
	
}