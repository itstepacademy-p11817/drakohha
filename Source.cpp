#include <iostream>
int main() {
	int a = 0;
	int b = 0;
	int yslovie = 1;
	while (yslovie != 0) {
		std::cout << "\n"<< "Vvedite nomer zadani9" << "\n" << "1-pervoe" << "\n" << "2-vtoroe" << "\n" << "3-tretie" << "\n" << "4-4etvertoe" << "\n" << "5-patoe" << "\n" << "0-vuhod"<<"\n";
		std::cin >> yslovie;
		if (yslovie > 5 && yslovie < 0) {
			std::cout << "\n" << "nevernui vvod, vvedite zanovo" << "\n";
			std::cin >> yslovie;
		}
		if (yslovie == 1)
		{
			std::cout << "\n" << "Vuvod 4isla ot 0 do vvedenogo polzovatrelem" << "\n" << "vvedite 4uslo" << "\n";
			std::cin >> a;
			while (b < a) {
				std::cout << "\n" << b;
				b++;
			}
		}
		if (yslovie == 2) {
			std::cout << "\n" << "polsovatel vvodit granicu diapozona, iz nego vuvesti kahdoe ne4etnoe" << "\n";
			static int granica_1 = 0;
			static int granica_2 = 0;
			std::cout << "\n" << "vvedite pervuu granicu" << "\n";
			std::cin >> granica_1;
			std::cout << "\n" << "vvedite vtoruu granicu" << "\n";
			std::cin >> granica_2;
			for (int i = granica_1; i < granica_2; i++)
			{
				if (i % 2 != 0)
				{
					std::cout << "\n" << i;
				}
			}
		}
		if (yslovie == 3) {
			std::cout << "\n" << "Vuvod stepeni 4isla" << "\n";
			static int x = 0;
			static int y = 0;
			std::cout << "\n" << "vvedite x=";
			std::cin >> x;
			std::cout << "\n" << "vvedite y=";
			std::cin >> y;
			
			for (int i = 1; i <= y; i++)
			{
				static int mag = x;
				std::cout << "\n" << mag;
				mag = mag*x;
			}
		}
		if (yslovie == 4) {
			std::cout << "\n" << "vuvesti summy vvedinux polsovatelem 4isel isp cikl. ostanovit pri vvode 4isla 0" << "\n";
			std::cout << "\n" << "vvedite pervoe 4islo" << "\n";
			static int pervoe;
			static int vtoroe;
			std::cin >> pervoe;
			do {
				std::cout << "\n" << "vvedite 4islo" << "\n";
				
				std::cin >> vtoroe;
				pervoe += vtoroe;
				std::cout << "\n" << "summa =" << pervoe;
			} while (vtoroe != 0);
			
		}
		if (yslovie == 5) {
			std::cout << "\n" << "treugolnic v kosloli, zada4a na vlohinue cuklu" << "\n";
			static int razmer = 0;
			static char c;
			std::cout << "\n" << "vvedite razmer treugolnica=";
			std::cin >> razmer;
			std::cout << "\n" << "vvedite simvol=";
			std::cin >> c;
			for (int i = 0; i < razmer; i++)
			{
				for (int z = 0; z <= i; z++)
				{
					std::cout << c;
				}
				std::cout << "\n";
			}

		}
	}
}