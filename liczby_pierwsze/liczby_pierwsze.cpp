#include <iostream>
using namespace std;

int main()
{
	int ilp = 1; // ile chcemy
	cin >> ilp;
	int zlp = 0; // znalezione
	int lp = 2; // aktualna liczba sprawdzana




	while (zlp <= ilp)
	{
		for (int d = 2; d <= lp - 1; d++) 
		{
			if (lp % d == 0)
			{
				cout << lp << endl;
				zlp++;
			}
			else 
			{
				lp++;
			}
		}

	}
}