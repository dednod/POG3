#include <iostream>
int main() {
	double pam = 0;
	int n;
	bool pam_u = 0;
	bool pam_un;
	int i = 0;


	while ( i<1)
	{ 
		std::cout << "1)+  " << "2)-  " << "3)*  " << "4)/  " << "5)mod  " << "6) out  " << "7) m+  "<< "8) m-  " << std::endl;
		std::cin >> n;
		switch (n)
		{
		case 1:
		{
			double a, b = 0;
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
		
		break;
		}
		case 2:
		{
			double a, b = 0;
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
			break;
		}
		case 3:
		{
			double a, b = 0;
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
			break;
		}
		case 4:
		{
			double a, b = 0;
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
			break;
		}
		case 5:
		{
			int a, b = 0;
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
			break;
		}
		
		}
		if(n==6)
		{
			i=i+1;
		}
		if (n == 7) { pam_u = 1; }
		if (n == 8) { pam_u = 0; }
	}
	return 0;
}
