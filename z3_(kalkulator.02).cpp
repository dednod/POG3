#include <iostream>

class kalkulator {

public:

	double pam = 0;
	int n;
	bool pam_u = 0;
	bool pam_un;
	double a, b;

private:
	int i = 0;

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
		return pam;
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
		return pam;
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
		return pam;
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
		return pam;
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
		return pam;
	}
public:
	void interfejs() {
		while (true) {
			std::cout << "1)+  " << "2)-  " << "3)*  " << "4)/  " << "5)mod  " << "6) out  " << "7) m+  " << "8) m-  " << std::endl;
			std::cin >> n;
			if (n == 1) { dodawanie(0, 0); }
			else if (n == 2) { odejmowanie(0, 0); }
			else if (n == 3) { mnozenie(0, 0); }
			else if (n == 4) { dzielenie(0, 0); }
			else if (n == 5) { mod(0, 0); }
			else if (n == 6) break;
			else if (n == 7) { pam_u = 1; }
			else if (n == 8) { pam_u = 0; }
		}
	}
	

};

int main()
{
	kalkulator calcu;
	calcu.interfejs();
	return 0;

    
}


