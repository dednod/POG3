
#include <iostream>

class kalkulator {

public:

	double pam = 0;
	int n;
	bool pam_u = 0;
	bool pam_un;
	int i = 0;
	double a, b;

private:

    double dodawanie(double a, double b)
    {
		if (pam_u == true) {
			std::cin >> b;
			pam = pam + b;
			std::cout << pam << std::endl;
			pam_un = 1;
		}
		else {
			std::cin >> a;
			std::cin >> b;
			pam = a + b;
			std::cout << pam << std::endl;
			pam_un = 1;
		}
   }
	double odejmowanie(double a, double b)
	{
		if (pam_u == true) {
			std::cin >> b;
			pam = pam - b;
			std::cout << pam << std::endl;
			pam_un = 1;
		}
		else {
			std::cin >> a;
			std::cin >> b;
			pam = a - b;
			std::cout << pam << std::endl;
			pam_un = 1;
		}
	}
	double mnozenie(double a, double b)
	{
		if (pam_u == true) {
			std::cin >> b;
			pam = pam * b;
			std::cout << pam << std::endl;
			pam_un = 1;
		}
		else {
			std::cin >> a;
			std::cin >> b;
			pam = a * b;
			std::cout << pam << std::endl;
			pam_un = 1;
		}
	}
	double dzielenie(double a, double b)
	{
		if (pam_u == true) {
			std::cin >> b;
			pam = pam / b;
			std::cout << pam << std::endl;
			pam_un = 1;
		}
		else {
			std::cin >> a;
			std::cin >> b;
			pam = a / b;
			std::cout << pam << std::endl;
			pam_un = 1;
		}
	}
	int mod(int a, int b)
	{
		if (pam_u == true) {
			a = pam;
			std::cin >> b;
			pam = a % b;
			std::cout << pam << std::endl;
			pam_un = 1;
		}
		else {
			std::cin >> a;
			std::cin >> b;
			pam = a % b;
			std::cout << pam << std::endl;
			pam_un = 1;
		}
	}
	int interfejs(int n) {
		std::cout << "1)+  " << "2)-  " << "3)*  " << "4)/  " << "5)mod  " << "6) out  " << "7) m+  " << "8) m-  " << std::endl;
		std::cin >> n;
		if (n == 6) { i = i + 1; }
		if (n == 7) { pam_u = 1; }
		if (n == 8) { pam_u = 0; }
	}

};

int main()
{
	
    
}

