#include <iostream>
using namespace std;

int n;

int main() {
	cout << "Podaj ilosc liczb pierwszysc ktore chcesz znalezc: \n";
	cout << "Liczby pierwsze ktory zostaly znalezione to: \n";
	cin >> n;
	int lp = 0;
	int p = 2;
	while (lp < n)
	{
		for (int d = 2; d < p - 1; d++)
		{
			if (p % d == 0)
			{
				p = p + 1;
				d = 2;
			}
		}
		cout << p << endl;
		lp = lp + 1;
		p = p + 1;
	}
}