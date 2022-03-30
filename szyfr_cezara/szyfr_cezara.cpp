#include <iostream>
using namespace std;
void szyfrowanie();

int main()
{
	int klucz;
	char tab[200];

	cin >> klucz;

	cin >> tab;

	szyfrowanie();
}

void szyfrowanie(int klucz, char tab[])
{
	int dl = strlen(tab);

	if (!(klucz >= -26 && klucz <= 26))
	{
		return;
	}

	if (klucz >= 0)
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab + klucz <= "z")
			{
				tab += klucz;
			}
			else
			{
				tab = tab + klucz - 26;
			}
		}
	}
	else
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab + klucz >= "a")
			{
				tab += klucz;
			}
			else
			{
				tab = tab + klucz + 26;
			}
		}
	}
}