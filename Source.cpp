#include <iostream>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
int main() {
	int flag_menu = 1;
	while (flag_menu != 0) {
		std::cout << "\n" << "VVedite nomer zadani9" << "\n" << "1-pervoe" << "\n" << "2-vtoroe" << "\n" << "3-tretie" << "\n" << "0-vuhod" << "\n";
		std::cin >> flag_menu;
		if (flag_menu == 0) {
			break;
		}
		if (flag_menu == 1) {
			std::cout << "\n" << "Zadaca na pr9moygolnik" << "\n";
			std::cout << "\n" << "Vvedite dlinu=";
			static int dlina = 0;
			std::cin >> dlina;
			std::cout << "\n" << "Vvedite hurinu=";
			static int shirina = 0;
			std::cin >> shirina;
			static char simvol = 'x';
			for (int j = 1; j <= shirina; j++) {
				
					for (int i = 1; i <= dlina; i++) {
						if (j==1 || j==shirina) {
							std::cout << "x";
						}
						
						}
					if (j != 1 && j != shirina) {
						std::cout << "x";
						for (int g = 2; g < shirina; g++)
						{
							std::cout << " ";
						}
						std::cout << "x";
					}
					std::cout << "\n";
					}
				
				
			
		}
		if (flag_menu == 2) {
			while (flag_menu!=0) {
				std::cout << "\n" << "Konvertor valut" << "\n" ;
				
				static int kurs = 0;
				static int flag_zd1 = 1;
				static double dolar = 0;
				static double rub = 0;
				static double rezult = 0;
				
				std::cout << "\n" << "tekysui kurs: 1 dollar = " << kurs << "rublei" << "\n";
				std::cout << "\n" << "vvedite nomer operacii:" << "\n" << "1-vvesti dollaru konvertirovatb v rubli" << "\n" << "2-vvesti rubli konvertirovat v dollaru" << "\n"<<"3-vvesti kurs"<<"\n" << "0-vuhod" <<"\n";
				std::cin >> flag_zd1;
				if (flag_zd1 == 0)
				{
					break;
				}
				if (flag_zd1 == 1) {
					std::cout << "\n" << "dollaru=";
					std::cin >> dolar;
					rezult = dolar * kurs;
					std::cout << "\n" << "Rubli ravnu =" << rezult <<"\n";
				}
				if (flag_zd1 == 2) {
					std::cout << "\n" << "Rubli=";
					std::cin >> rub;
					
					rezult = rub / kurs ;
					std::cout << "\n" << "Dollari ravnu=" << rezult <<"\n";
				}
				if (flag_zd1 == 3) {
					std::cout << "\n" << "Vvedite Kyrs rubla k dollaru=";
					std::cin >> kurs;
				}

			}
		}
		if (flag_menu == 3) {
			std::cout << "\n" << "Zagadaite 4islo=";
			time_t start = time(NULL);

			static int kol = 0;
			static int num = 0;
			static int num_pr = 0;
			std::cin >> num;
			srand(time(NULL));
			num_pr = rand() % 500 + 1;
			while (num != num_pr) {
				if (num < num_pr) {
					std::cout << "\n" << "Vahe 4islo menhe";
					kol++;
				}
				if (num > num_pr) {
					std::cout << "\n" << "Vahe 4islo bolhe";
					kol++;
				}
				std::cout << "\n";
				std::cin >> num;
				if (num == num_pr) {
					std::cout << "\n" << "Vu ygadali za " << kol << "poputok";
					int seconds = time(NULL) - start;
					std::cout << "\n" << "vu potratili =" << seconds << "sekynd";
				}
			}
		}
	}
	return 0;
}