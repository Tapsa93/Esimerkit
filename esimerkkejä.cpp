/*
//esimerkki 5-1
#include <iostream> 
using namespace std;
int main()
{
	long double luku = 32767000000;
	luku = luku + 1;
	cout << luku;
	return 0;
}

//Esimerkki 5-5
#include <iostream> 
using namespace std;
int main()
{
	char merkki = 'a';
	cout << endl << "Merkki on nyt: " 
	<< merkki
	<< (int)merkki;
	merkki = merkki + 1;
	cout << endl << "Merkki on nyt: "
		<< merkki
		<< (int)merkki;
	return 0;
}
*/
//Esimerkki 6-2
//#include <iostream.h> 
/*
#include <iostream> 
using namespace std;
int main(void)
{
	int luku = 5;
	int lukux; 
	char merkki = 'a';
	float reaali = 5.5;
	float reaalix;
	lukux = merkki;
	cout << "\nchar -> int " << lukux;
	lukux = (int) reaali;
	cout << "\nfloat -> int " << lukux;
	reaalix = luku;
	cout << "\nint -> float " << reaalix;
	reaalix = merkki;
	cout << "\nchar -> float " << reaalix;
	return 0;
}
*/
//Esimerkki 6-4
/*
#include <iostream> 
using namespace std;
#include <cstring> 
int main()
{
	char jono1[10] = "C-kieli";
	char jono2[10] = { 'C', '+', '+', '\0' };
	cout << "Alkuarvo jono1:ssä on: " << jono1;
	strcpy_s(jono1, jono2);
	cout << "\nJa lopputulos on: " << jono1;
	return 0;
}
*/
/*6-17
#include <iostream> 
using namespace std;
int main()
{
	int ika;
	char kokonimi[30];
	char osoite[30];
	cout << "\nIkä? ";
	cin >> ika;
	cout << "Nimi? ";
	cin.get();//Lukee yhden merkin näppäinpuskurista pois, tässä tapauksessa Enter
	cin.get(kokonimi, 30);
	cout << "Osoite? ";
	cin.get();
	cin.get(osoite, 30);
	cout << "\nIkä : " << ika;
	cout << "\nNimi: " << kokonimi;
	cout << "\nOsoite: " << osoite;
	return 0;
}
*/
/*Esimerkki 6-21
#include <iostream> 
using namespace std;
int main()
{
	int luku1 = 5, luku2 = 2;
	int summa, erotus, tulo,  jaannos;
	float osamaara;
	summa = luku1 + luku2;
	erotus = luku1 - luku2;
	tulo = luku1 * luku2;
	osamaara =  (float) luku1 / luku2;
	jaannos = luku1 % luku2;
	cout << "\nLuku1: " << luku1 << " Luku2: " << luku2;
	cout << "\nSumma: " << summa;
	cout << "\nErotus: " << erotus;
	cout << "\nTulo: " << tulo;
	cout << "\nOsamäärä: " << osamaara;
	cout << "\nJakojäännös: " << jaannos;
	return 0;
} 

*/
/*Esimerkki 6-22
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
double x = 2, y = 3, tulos;
tulos = pow(x, y);
cout<<"Tulos on: "<<tulos;
return 0;
}
*/

/*/Esimerkki 7-4
#include <iostream>
using namespace std;
int main()
{
int luku;
cout<<"Syötä luku: ";
cin>>luku;
if (luku < 0) //tosi
{
luku = luku * -1;
cout<<"\nLuku on positiivisena: "<<luku;
}
else //Epätosi
cout<<"\nLuku on positiivinen";
return 0;
}*/

/*/Esimerkki 7-6
#include <iostream> 
using namespace std;
int main()
{
	int valinta;
	cout << "VALIKKO";
	cout << "\n\n1 Uusi tiedosto ";
	cout << "\n2 Avaa tiedosto";
	cout << "\n3 Talleta tiedosto";
	cout << "\n0 Lopeta \nValintasi: ";
	cin >> ws >> valinta;
	switch (valinta)
	{
	case 0:	cout << "\nValittu lopetus";
		break;
	case 1: cout << "\nValittu uusi tiedosto";
		break;
	case 2:	cout << "\nValittu tiedoston avaus";
		break;
	case 3:	cout << "\nValittu tiedoston talletus";
		break;
	default:	cout << "\nVirhe: ei ko. toimintoa!";
		break;
	}
	return 0;
}
*/

/*/Esimerkki 7-11
#include <iostream> 
using namespace std;
#include <cstring> 
int main()
{
	char jono1[10] = "alku";
	char jono2[15] = "loppu";
	if (strcmp(jono1, jono2) < 0)
		cout << jono1 << " oli enimmäinen";
	else
		cout << jono2 << " oli ensimmäinen";
	return 0;
}*/

/*/Esimerkki 7-12 Toistorakenne
#include <iostream> 
using namespace std;
int main(void)
{
	int kerrat = 4;
	//int lkm = 0;  //Silmukkalaskuri
	while (kerrat) // Kerrat on eri kuin nolla eli != 0
	{
		cout << "\nTerve";
		kerrat--;
	}
	return 0;
}*/

/*/Esimerkki 7-13
#include <iostream> 
using namespace std;
int main()
{
	int kerrat = 4;
	int lkm = 0;
	do
	{
		cout << "\nTerve";
		lkm++;
	} while (lkm < kerrat);
	return 0;
}*/

/*/Esimerkki 7-14
#include <iostream> 
using namespace std;
int main()
{
	int kerrat = 4;
	int lkm;
	//for (aloituslauseet;ehto;Lopetuslause)
	for (lkm = 0; lkm < kerrat; lkm++)
		cout << "\nTerve";
	return 0;
}*/

/*/Esimerkki 7-16
#include <iostream> 
using namespace std;
int main()
{
	char merkki;
	int lkm = 0;
	cout << "Kirjoita lause (keskeytys CTRL-C): ";
	while (1)
	{
		cin.get(merkki);
		if (merkki == '.')
			break;
		if (merkki == ' ')
			continue;
		lkm++;
	}
	cout << "\nLauseessa oli yhteensä " << lkm << " kirjainta";
	return 0;
}*/
