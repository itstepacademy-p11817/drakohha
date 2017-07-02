#include <iostream>
int main() {
	
	int rast_ab = 0;
	int rast_bc = 0;
	int skorost = 0;
	int flag_menu = 1;
	int flag_deistvie = 0;
	int gruz_ves = 0;
	while (flag_menu != 0) {
		std::cout << "Dobro pohalovat" << "\n" << "Vvedite nomer zadani9" << "\n" << "1-pervoe zadanie " << "\n" << "2-vtoroe zadanie" << "\n" << "3-trete zadanie" << "\n";
		std::cin >> flag_deistvie;
		if (flag_deistvie < 0 && flag_deistvie >3)
		{
			std::cout << "nekorektnui vvod , vvedite zanogo" << "\n";
			std::cin >> flag_deistvie;
		}
		if (flag_deistvie == 0)
		{
			flag_menu = 0;
		}
		if (flag_deistvie == 1)
		{
			static int flag_zd1 = 1;
			while (flag_zd1 != 0) {
				std::cout << "\n" << "Zadaca na polet samoleta : " << "\n";
				std::cout << "\n" << "vvedite rasto9nie ot A do B =";
				std::cin >> rast_ab;
				std::cout << "\n" << "vvedite rasto9nie ot B do C =";
				std::cin >> rast_bc;
				std::cout << "\n" << "vvedite ves gruza =";
				std::cin >> gruz_ves;
				if (gruz_ves > 2000) {
					std::cout << "\n" << "Gruz slihkom velik, samolet ne vzletit";
					flag_zd1 = 0;
				}
				if (gruz_ves <= 500)
				{
					skorost = 1;
				}
				if (gruz_ves > 500 && gruz_ves <= 1000) {
					skorost = 4;
				}
				if (gruz_ves > 1000 && gruz_ves <= 1500) {
					skorost = 7;
				}
				if (gruz_ves > 1500 && gruz_ves < 2000) {
					skorost = 9;
				}
				if(flag_zd1!=0){
					static int rast;
					static int rast2;
					static int toplivo = 300;
					rast = skorost * rast_ab; //rashod topliva na rasto9nie ab
					rast2 = skorost*rast_bc; //toplivo na rasto9ni bc
					if (toplivo <= rast && toplivo <=rast2) {
						toplivo = toplivo - rast;
						
						std::cout << "\n" << "Dl9 poleta iz A v B potrebili topliva=" << rast;
						if (rast2 < toplivo) {
							std::cout << "\n" << "Topliva itak hvatit dl9 polota iz b v c" << "\n" << "i potrebit vsego=" << rast2;
							flag_zd1 = 0;
						}
						else {
							toplivo = rast2 - toplivo;
							std::cout << "\n" << "Dl9 poleta iz B v C potrebuecco dozopravit topliva= " << toplivo;
							flag_zd1 = 0;
						}

					}
				
					
				}



			}
		}
		if (flag_deistvie == 2)
		{

		}
		if (flag_deistvie == 3)
		{

		}
	}
}