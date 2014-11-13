/*Harjoitus 21 (Palautus vko 48)
Muunna harjoitus 11 niin, etta k‰yt‰t seuraavia aliohjelmia :

int KysyValinta(void);

->KysyValinta paluttaa k‰ytt‰j‰n antaman valintanumeron(0 - 6)

double Summa(float luku1, int luku2);

->Summa laskee yhteen annetut tiedot ja palauttaa summan p‰‰ohjelmaan
VALIKKO
0. Lopetus
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos
6. Syota uudet luvut laskemista varten*/

#include <iostream>
using namespace std;
int kysyvalinta();
double summa;
int main()
{
	int luku1, luku2;
	cout << "Anna luku ";
	cin >> luku1;
	cout << "Anna luku ";
	cin >> luku2;
	int valinta;
	do
	{
		cout << "VALIKKO";
		cout << "\n1Summa";
		cout << "\n2Erotus";
		cout << "\n3Tulo";
		cout << "\n4Osam‰‰r‰";
		cout << "\n5Jakoj‰‰nnˆs";
		cout << "\n6Laske uusilla luvuilla" << endl;
		cout << "Valintasi: ";
		cin >> ws >> valinta;
		switch (valinta)
		{
		case 1: cout << "\nLukujen summa on " << luku1 + luku2;
			break;
		case 2: cout << "\nLukujen erotus on " << luku1 - luku2;
			break;
		case 3: cout << "\nLukujen tulo on " << luku1*luku2;
			break;
		case 4: cout << "\nLukujen osamaara on " << (float)luku1 / luku2;
			break;
		case 5: cout << "\nJakojaannos on " << luku1%luku2;
			break;
		case 6: cout << "Anna luku ";
			cin >> luku1;
			cout << "Anna luku ";
			cin >> luku2;
		}


	} while (valinta != 0);

	return 0;



}
