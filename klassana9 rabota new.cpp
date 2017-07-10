#include <iostream>
int main() {
	int static flag_menu = 1;
	while (flag_menu != 0) {
		std::cout << "\n" << "Vvedite nomer zadaci" << "\n";
		std::cout << "\n" << "1-perva9" << "\n" << "2-vtora9" << "\n" << "3-tretia" << "\n" << "4-4etverta9" << "\n" << "0-vohod" << "\n";
		std::cin >> flag_menu;
		if (flag_menu == 0) {
			break;
		}
		if (flag_menu == 1) {
			std::cout << "\n" << "Vvedite granicu 4isel: ";
			static int granica_1 = 0;
			static int granica_2 = 0;
			static int per = 0;
			std::cout << "\n" << "Perva9 granica = ";
			std::cin >> granica_1;
			std::cout << "\n" << "Vtora9 granica = ";
			std::cin >> granica_2;
			std::cout << "\n" << "Teper vvedite 4islo v diopazone ot " << granica_1 << " do " << granica_2 << " = ";
			std::cin >> per;
			if (per< granica_1 || per > granica_2) {
				std::cout <<"\n" << "4islo ne popadaet v diapozon vvedite zanogo"<<"\n";
				static int id = 1;
				id = 1;
				while (id!=0) {
					
					std::cin >> per;
					if (per >= granica_1 && per <= granica_2) {
						id = 0;
					}
				}
			}
			std::cout << "\n" << "4islo vvedeno verno" << "\n";
		}
		if (flag_menu == 2) {
			std::cout << "\n" << "Vtora9 zadaca" << "\n" << "Vu4islenie summu";
			std::cout << "\n" << "Vvedite 4islo= ";
			static int per_1;
			static long double sum = 0;
			static double fact = 0;
			sum = 0;
			std::cin >> per_1;
			std::cout << "\n" << "Vu4islenie summ= ";
			for (int i = 1; i <= per_1; i++) {
				fact = 1;
				for (int j = 1; j <= i; j++) {
					fact = fact*j;
				}
				sum = sum + (1 / fact);
				
			}
			std::cout << sum;

		}
		if (flag_menu == 3) {
			std::cout << "\n" << "Tretia zadaca" << "\n" << "Opredelenie s4aslivuh biletov:" << "\n";
			static int x_1 = 0;
			static int x_2 = 0;
			static int kol = 0;
			for (int i = 1; i <= 999999; i++) {
				x_1 = i / 1000;
				x_2 = i % 1000;
				if ((x_1 / 100 + x_1 / 10 % 10 + x_1 % 10) == (x_2 / 100 + x_2 / 10 % 10 + x_2 % 10)) {
					kol++;
				}
			}
			std::cout << "\n" << "Koli4estvo biletov rafno= " << kol+1; // +1 - ato dobavit bilet nomer 000 000
			kol = 0;

		}
		if (flag_menu == 4) {
			static int cena_elka =300;
			static int tek_kol_tov = 0;
			static int vurucka = 0;
			static int vurucka_1 = 0;
			static int kasa_vurucka;
			static int kol_elka = 5;
			static int kol_igruhka = 5;
			static int kol_alkogol = 5;
			static int kol_salat = 5;
			static int skidka = 0;
			static int tek_tov;
			static int cena_igruhka =500;
			static int cena_alkogol=1000;
			static int cena_salat=250;
			static int klient[5] = { 0 };
			static int ind = 1;
			static int ind2 = 0;
			static int flag_zd1 = 1;
			while (flag_zd1 != 0) {
				
				std::cout << "\n" << "Kassovui apparat" << "\n";
				std::cout << "\n" << "1-naca4 obsluhivatb klienta" << "\n" << "2-vubratb tovar iz spiska" << "\n" << "3-dobavit skidky" << "\n" << "4-prosmotr info" << "\n" << "5-pos4ita klienta" << "\n" << "6-podvesti novogo tovara" << "\n" << "7-izmenit cenu na tovaru" << "\n" << "8-vuhod" << "\n";
				std::cin >> flag_zd1;
				if (flag_zd1 < 0 && flag_zd1 >8) {
					std::cout << "\n" << "Ne korektna9 operacia" << "\n";
				}
				if (flag_zd1 == 1) {
					static int flag_zd2 = 1;
					while (flag_zd2 != 0) {
						std::cout << "\n" << "Vuberete deistvie:" << "\n" << "1-na4at obslyhivat klienta" << "\n" << "2- dobavit novogo klienta" << "\n" << "3- pereklucits9 mehdy  klientami" << "\n" << "4-vuiti iz atogo podmenu" << "\n";
						std::cin >> flag_zd2;
						if (flag_zd2 == 0) {
							break;
						}
						if (flag_zd2 == 1) {
							klient[0] = 1;
							std::cout << "\n" << "Klient vubran # 0"<<"\n";
						}
						if (flag_zd2 == 2) {
							if (ind == 4) {
								std::cout << "\n" << "Dostignuto maks kol klientov" << "\n";
							}
							for (int i = 0; i < 5; i++) {
								if (klient[i] == 0) {
									klient[i] = 1;
									ind = i;
									std::cout << "\n" << "Dobavlen novui klient pod nomerom # " << i <<"\n";
									break;
								}
							}
							
						}
						if (flag_zd2 == 3) {
							std::cout << "\n" << "Vuberete tekyhego klienta";
							for (int i = 0; i < 5; i++) {
								if (klient[i] == 1) {
									std::cout << "\n" << "Klient # " << i;
								}
							}
							std::cout << "\n" << "Vvedite 4ifru klienta= ";
							std::cin >> ind2;
							std::cout << "\n" << "Vubran klient # " << ind2 << "\n";
						}
						if (flag_zd2 == 4) {
							break;
						}

					}
				}
				if (flag_zd1 == 2) {
					std::cout << "\n" << "Vuberete tovar:" << "\n";
					std::cout << "\n" << "1- elki (po cene= " << cena_elka << ")";
					std::cout << "\n" << "2- igruhka (po cene= " << cena_igruhka << ")";
					std::cout << "\n" << "3- alkogol (po cene= " << cena_alkogol << ")";
					
					std::cout << "\n" << "4- salaat (po cene= " << cena_salat << ")" << "\n";
					std::cout << "\n" << "0-Ne vubirat tovar" << "\n";
					std::cin >> tek_tov;
					if (tek_tov < 0 && tek_tov >4) {
						std::cout << "\n" << "ne korektnu vubor paprobuite ehe raz" << "\n";
						while (tek_tov > 0 && tek_tov <= 4) {
							std::cin >> tek_tov;
						}
					}
					std::cout << "\n" << "Vubran tekyhi tovar # " << tek_tov << "\n";
					std::cout << "\n" << "Zadaite koli4estvo tovara = ";
					std::cin >> tek_kol_tov;
					std::cout << "\n" << "Vubran tekyhi tover # " << tek_tov << " v koli4estve " << tek_kol_tov;
					if (tek_tov == 1) {
						vurucka_1 = cena_elka*tek_kol_tov;
					}
					if (tek_tov == 2) {
						vurucka_1 = cena_igruhka*tek_kol_tov;
					}
					if (tek_tov == 3) {
						vurucka_1 = cena_alkogol*tek_kol_tov;
					}
					if (tek_tov == 4) {
						vurucka_1 = cena_salat*tek_kol_tov;
					}
					vurucka += vurucka_1;
					std::cout << "\n" << "Nabrana na summy = " << vurucka<<"\n";

				}
				if (flag_zd1 == 3) {
					std::cout << "\n" << "Vuberete skidku:" << "\n";
					std::cout << "\n" << "1-5%" << "\n" << "2-10%" << "\n" << "3-15%" << "\n" <<"0-Ne vibirat skidku"<<"\n";
					std::cin >> skidka;
					if (skidka < 0 && skidka>3) {
						std::cout << "\n" << "Ne korektniu vvod";
						while (skidka >= 0 && skidka <= 3) {
							std::cin >> skidka;
						}
					}
					if (skidka == 1) {
						skidka = 5;
					}
					if (skidka == 2) {
						skidka = 10;
					}
					if (skidka == 3) {
						skidka = 15;
					}

				}
				if (flag_zd1 == 4) {
					
					static int g = 1;
					static int kol2 = 0;
					g = 1;
					while (g != 0) {
						kol2 = 0;
						std::cout << "\n" << "Osnovnoe menu informacii o tekyhem sosto9nii:";
						std::cout << "\n" << "Koli4estvo obsluhivaemih klientov= ";
						for (int i = 0; i < 5; i++) {
							if (klient[i] == 1) {
								kol2++;
							}
						}
						std::cout << kol2 << "\n";
						std::cout << "\n" << "tekyhii vubraniu klient # ";
						std::cout << ind2;
						std::cout << "\n" << "Dostupnie tovaru:" << "\n";
						std::cout << "\n" << " elki (po cene= " << cena_elka << ") " << "v koli4estve= " << kol_elka;
						std::cout << "\n" << " igruhka (po cene= " << cena_igruhka << ") " << "v koli4estve= " << kol_igruhka;
						std::cout << "\n" << " alkogol (po cene= " << cena_alkogol << ") " << "v koli4estve= " << kol_alkogol;
						std::cout << "\n" << " salaat (po cene= " << cena_salat << ") " << "v koli4estve= " << kol_salat << "\n";
						std::cout << "\n" << "tekyha9 summa v kase= " << kasa_vurucka << "\n";
						std::cout << "\n" << "Vubran tekyhi tover # " << tek_tov << " v koli4estve " << tek_kol_tov <<"\n";
						std::cout << "\n" << "Tekyha9 skodka= " << skidka;
						std::cout << "\n" << "Vvedite cifru 0 dl9 vozfrata iz atogo podmenu" <<"\n";
						std::cin >> g;
					}

				}
				if (flag_zd1 == 5) {
					std::cout << "\n" << "Pos4itatb TEKYHEGO klienta " << "\n";
					vurucka = vurucka - vurucka / 100 * skidka;
					std::cout << "\n" << "Klient nabaral na summy = " << vurucka<<"\n";
					kasa_vurucka += vurucka;
					vurucka = 0;
					klient[ind2] = 0;
					
				}
				if (flag_zd1 == 6) {
					static int ind4=1;
					while (ind4 != 0) {
						std::cout << "\n" << "Podvoz novogo tovara" << "\n";
						std::cout << "\n" << "Vuberete toavr :" << "\n";
						std::cout << "\n" << "1- elki (po cene= " << cena_elka << ") " << "v koli4estve= " << kol_elka;
						std::cout << "\n" << "2- igruhka (po cene= " << cena_igruhka << ") " << "v koli4estve= " << kol_igruhka;
						std::cout << "\n" << "3- alkogol (po cene= " << cena_alkogol << ") " << "v koli4estve= " << kol_alkogol;
						std::cout << "\n" << "4- salaat (po cene= " << cena_salat << ") " << "v koli4estve= " << kol_salat << "\n";
						std::cout << "\n" << "0-vugod iz atogo podmenu" << "\n";

						std::cin >> ind4;
						if (ind4<0 && ind4>4) {
							std::cout << "\n" << "Ne korektniu vubor, ehe raz= ";
							std::cin >> ind4;
						}
						if (ind4 == 0) {
							break;
						}
						std::cout << "\n" << "Zadaite podvozimoe koli4estvo= ";
						static int kol_per1;
						std::cin >> kol_per1;
						if (ind4 == 1) {
							kol_elka += kol_per1;
							kol_per1 = 0;
						}
						if (ind4 == 2) {
							kol_igruhka += kol_per1;
							kol_per1 = 0;
						}
						if (ind4 == 3) {
							kol_alkogol += kol_per1;
							kol_per1 = 0;
						}
						if (ind4 == 4) {
							kol_salat += kol_per1;
							kol_per1 = 0;
						}
					}


				}
				if (flag_zd1 == 7) {
					static int cen_1 = 1;
					while (cen_1 != 0) {
						
						std::cout << "\n" << "Izmenenie  cen:" << "\n";
						std::cout << "\n" << "Vuberete torvar:" << "\n";
						std::cout << "\n" << "1- elki (po cene= " << cena_elka << ") " << "v koli4estve= " << kol_elka;
						std::cout << "\n" << "2- igruhka (po cene= " << cena_igruhka << ") " << "v koli4estve= " << kol_igruhka;
						std::cout << "\n" << "3- alkogol (po cene= " << cena_alkogol << ") " << "v koli4estve= " << kol_alkogol;
						std::cout << "\n" << "4- salaat (po cene= " << cena_salat << ") " << "v koli4estve= " << kol_salat << "\n";
						std::cout << "\n" << "0-vugod iz etogo podmenu" << "\n";
						std::cin >> cen_1;
						if (cen_1 == 0) {
							break;
						}
						if (cen_1 == 1) {
							std::cout << "\n" << "Vubranu elki vvedite novui cenu= ";
							std::cin >> cena_elka;
						}
						if (cen_1 == 2) {
							std::cout << "\n" << "Vubranu igruhka vvedite novui cenu= ";
							std::cin >> cena_igruhka;
						}
						if (cen_1 == 3) {
							std::cout << "\n" << "Vubranu alkogol vvedite novui cenu= ";
							std::cin >> cena_alkogol;
						}
						if (cen_1 == 4) {
							std::cout << "\n" << "Vubranu salat vvedite novui cenu= ";
							std::cin >> cena_salat;
						}
					}

				}


			}
		}
	}
}