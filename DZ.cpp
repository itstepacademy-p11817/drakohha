#include <iostream>
int main() {
	
	int rast_ab = 0;
	int rast_bc = 0;
	int skorost = 0;
	int flag_menu = 1;
	int flag_deistvie = 0;
	int gruz_ves = 0;
	while (flag_menu != 0) {
		std::cout << "\n"<<"Dobro pohalovat" << "\n" << "Vvedite nomer zadani9" << "\n" << "1-pervoe zadanie " << "\n" << "2-vtoroe zadanie" << "\n" << "3-trete zadanie" << "\n";
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
					if (toplivo >= rast && toplivo >=rast2) { //условие проверки хватит ли топлива долететь вообще
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
					else {
						std::cout << "\n" << "Rasto9nie slihkom bolhoe i s takim gruzom samolet ne doletit";
						flag_zd1 = 0;
					}
				
					
				}



			}
		}
		if (flag_deistvie == 2)
		{
			static int flag_zd2 = 1;
			flag_zd2 = 1;
			while (flag_zd2 != 0) {
				std::cout << "\n" << "Zadaca nomer 2";
				std::cout << "\n" << "Vvedite pervuu datu vvide 4isel=";
				static int data1 = 0;
				static int data2 = 0;
				static int data1_day;
				static int data1_mans;
				static int data1_god;
				static int data2_day;
				static int data2_mans;
				static int data2_god;
				std::cout << "\n" << "Den= ";
				std::cin >> data1_day;
				std::cout << "Mes9c= ";
				std::cin >> data1_mans;
				std::cout << "God= ";
				std::cin >> data1_god;
				std::cout << "\n" << "Vvedite vtoruu datu vvide 4isel=";
				std::cout << "\n" << "Den= ";
				std::cin >> data2_day;
				std::cout << "Mes9c= ";
				std::cin >> data2_mans;
				std::cout << "God= ";
				std::cin >> data2_god;

				static int data = 0;   // перемення для хранения и подсчета дней
				for (int i = 1; i <= data1_mans; i++)  // цикл подсчета дней в зависимости от месяца
				{
					if (i == 1) {
						data += 31;
					}
					if (i == 2 ) {
						if (data1_god % 4 != 0) {    // определение весокосный ли год
							data += 28;
						}
						else {
							data += 29;
						}
					}
					if (i == 3) {
						data += 31;
					}
					if (i == 4) {
						data += 30;
					}
					if (i == 5) {
						data += 31;
					}
					if (i == 6) {
						data += 30;
					}
					if (i == 7) {
						data += 31;
					}
					if (i ==8) {
						data += 31;
					}
					if (i == 9) {
						data += 30;
					}
					if (i == 10) {
						data += 31;
					}
					if (i == 11) {
						data += 30;
					}
					if (i == 12) {
						data += 31;
					}
				}
				data = data + data1_day;
				data1 = data;    // подсчет суммы дней в введенной первой дате
				data = 0;
				for (int i = 1; i <= data2_mans; i++)
				{
					if (i == 1) {
						data += 31;
					}
					if (i == 2) {
						if (data2_god % 4 != 0) {
							data += 28;
						}
						else {
							data += 29;
						}
					}
					if (i == 3) {
						data += 31;
					}
					if (i == 4) {
						data += 30;
					}
					if (i == 5) {
						data += 31;
					}
					if (i == 6) {
						data += 30;
					}
					if (i == 7) {
						data += 31;
					}
					if (i == 8) {
						data += 31;
					}
					if (i == 9) {
						data += 30;
					}
					if (i == 10) {
						data += 31;
					}
					if (i == 11) {
						data += 30;
					}
					if (i == 12) {
						data += 31;
					}
				}
				data2 = data + data2_day;   // подсчет дней в веденной дате номер два
				data = 0;
				static int data_god = 0;  // переменная для определения количества годов между датами
				data_god = data1_god - data2_god;
				if (data_god < 0)       // убирание знака минуса так как введеные даты могут быть в любом порядке
				{
					data_god *= (-1);
				}
				for (int i = 1; i <= data_god; i++)  // считает количество дней между датами в зависимости от весокосного года
				{
					if (data1_god % 4 == 0) {
						data += 366;
					}
					else {
						data += 365;
					}
					data1_god++;
				}
				data = data + data1 - data2; // добовляет точно количесво дней между двумя введеными датами
				std::cout << "\n" << "Raznica mehdy datami dnei= " << data;
				data = 0;
				flag_zd2 = 0;
				
			}
		}
		if (flag_deistvie == 3)
		{
			std::cout << "\n" << "Zadaca nomer 3" << "\n";
			std::cout << "Vvedite yroven prodaz dl9 menedhera Tom=";
			static int prodahi_tom = 0;
			std::cin >> prodahi_tom;
			std::cout << "\n" << "Vvedite yroven prodaz dl9 menedhera Mark=";
			static int prodahi_mark = 0;
			std::cin >> prodahi_mark;
			std::cout << "\n" << "Vvedite yroven prodaz dl9 menedhera Boby=";
			static int prodahi_boby = 0;
			std::cin >> prodahi_boby;
			static int zarplata_tom = 0;
			static int zarplata_mark = 0;
			static int zarplata_boby = 0;
			static int prem1 = 0;
			static int prem2 = 0;
			static int prem3 = 0;
			if (prodahi_tom < 500) {
				prem1 = (prodahi_tom * 3 )/ 100;   // высчитывает премию от количества продаж
			}
			if (prodahi_tom >= 500 && prodahi_tom < 1000) {
				prem1 = (prodahi_tom * 5) / 100;
			}
			if (prodahi_tom >= 1000)
			{
				prem1 = (prodahi_tom * 8) / 100;
			}
			if (prodahi_mark < 500) {
				prem2 = (prodahi_mark * 3) / 100;
			}
			if (prodahi_mark >= 500 && prodahi_mark < 1000) {
				prem2 = (prodahi_mark * 5) / 100;
			}
			if (prodahi_mark >= 1000)
			{
				prem2 = (prodahi_mark * 8) / 100;
			}
			if (prodahi_boby < 500) {
				prem3 = (prodahi_boby * 3) / 100;
			}
			if (prodahi_boby >= 500 && prodahi_boby < 1000) {
				prem3 = (prodahi_boby * 5) / 100;
			}
			if (prodahi_boby >= 1000)
			{
				prem3 = (prodahi_boby * 8) / 100;
			}
			zarplata_tom = 200 + prem1;
			zarplata_mark = 200 + prem2;
			zarplata_boby = 200 + prem3;
			if (prodahi_tom > prodahi_mark && prodahi_tom > prodahi_boby)  // проверка на лучшего менеджера
			{
				zarplata_tom += 200;
			}
			if (prodahi_mark > prodahi_tom && prodahi_mark > prodahi_boby) {
				zarplata_mark += 200;
			}
			if (prodahi_boby > prodahi_tom && prodahi_boby > prodahi_mark) {
				zarplata_boby += 200;
			}
			std::cout << "\n" << "Zarplata Toma rafna=" << zarplata_tom;
			std::cout << "\n" << "Zarplata Marka rafna=" << zarplata_mark;
			std::cout << "\n" << "Zarplata Boby's rafna=" << zarplata_boby;

		}
	}
	return 0;
}