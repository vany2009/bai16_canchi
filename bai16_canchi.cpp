
#include <iostream>
using namespace std;
int main()
{
	int nam;
	cout << "nhap so nam:"; cin >> nam;
	int socan, sochi;
	string can[] = { "canh","tan","nhan","quy","giap","at","binh","dinh","mau","ky" };
	string chi[] = { "than","dau","tuat","hoi","ty","suu","dan","mao","thin","ti","ngo","mui" };
	socan = nam % 10;
	sochi = nam % 12;
	for (int i = 2000; i <= 2024; i++)
	{
		cout << can[socan];
		cout << chi[sochi];
	}
	return 0;
}
  