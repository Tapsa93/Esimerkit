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
	cout << "Alkuarvo jono1:ss‰ on: " << jono1;
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
	cout << "\nIk‰? ";
	cin >> ika;
	cout << "Nimi? ";
	cin.get();//Lukee yhden merkin n‰pp‰inpuskurista pois, t‰ss‰ tapauksessa Enter
	cin.get(kokonimi, 30);
	cout << "Osoite? ";
	cin.get();
	cin.get(osoite, 30);
	cout << "\nIk‰ : " << ika;
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
	cout << "\nOsam‰‰r‰: " << osamaara;
	cout << "\nJakoj‰‰nnˆs: " << jaannos;
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
cout<<"Syˆt‰ luku: ";
cin>>luku;
if (luku < 0) //tosi
{
luku = luku * -1;
cout<<"\nLuku on positiivisena: "<<luku;
}
else //Ep‰tosi
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
		cout << jono1 << " oli enimm‰inen";
	else
		cout << jono2 << " oli ensimm‰inen";
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
	cout << "\nLauseessa oli yhteens‰ " << lkm << " kirjainta";
	return 0;
}*/

/*#include <iostream>
using namespace std;
void main()
{
	int pp;
	int kk;
	int vv;
	cout << "Anna pvm pp kk vv:";
		cin >> pp >> kk >> vv;
		cout << "Paiva " << pp << endl;
		cout << "Kuukausi " << kk << endl;
		cout << "Vuosi " << vv << endl;
}*/

/*Esimerkki 9-3
#include <iostream> 
using namespace std;
struct PVM
{
	char vp[20];
	int pp, kk, vv;
	
};
int main()
{
	PVM pvm1 = {" jokupaiva", 1, 1, 2014 };
	PVM pvm2;
	cout << "\nMonesko p‰iv‰ t‰n‰‰n on "
		"(syˆt‰ muodossa 99 99 99 viikonpaiva)?\n";
	cin >> ws >> pvm2.pp >> ws >> pvm2.kk >> ws >> pvm2.vv >> ws >> pvm2.vp;
	cout << "\nVuoden ensimm‰inen p‰iv‰ on: ";
	cout << pvm1.pp << '.' << pvm1.kk << '.' << pvm1.vv << pvm1.vp;
	cout << "\nT‰n‰‰n on: " << pvm2.pp << '.' << pvm2.kk << '.' << pvm2.vv << " " << pvm2.vp;
	return 0;
}*/
/*
#include <iostream> 
using namespace std;
int main()
{
	const int max = 5;
	int luvut[max] = { 1, 2, 3, 4, 5 };
	int ind;
	//for (ind = 0; ind > max; ind++)
	ind = 4;
	while (ind > -1)
	{
		cout << "\nJ‰rjestysnumero: " << ind;
		cout << " Sis‰ltˆ: " << luvut[ind];
		ind--;
	}
	return 0;
}*/
/*Esimerkki 9-12
#include <iostream> 
using namespace std;
struct PVM
{
	int pp, kk, vv;
};
int main()
{
	PVM paivat[5] = { { 1, 1, 96 },
	{ 1, 2, 96 },
	{ 1, 3, 96 },
	{ 1, 4, 96 },
	{ 1, 5, 96 } };
	int ind;
	for (ind = 0; ind < 5; ind++){
		cout << "Anna" << ind+1 <<". paivamaara: ";
		cin >> paivat[ind].pp >> paivat[ind].kk >> paivat[ind].vv;
	}
	for (ind = 0; ind < 5; ind++)
	{
		cout << "\nP‰iv‰: ";
		cout << paivat[ind].pp << '.';
		cout << paivat[ind].kk << '.';
		cout << paivat[ind].vv;
	}
	return 0;
}*/

/*Harjoitus 18 (Palautus vko 46)
Tee ohjelma, joka kysyy viiden koiran nimet ja i‰t.
Tiedot tallennetaan tietuetaulukkoon.
a) j‰rjest‰ tiedot ik‰ -kent‰n mukaan suuruusj‰rjestykseen
(pienimm‰st‰ suurimpaan). Ohjelma tulostaa lopuksi
jarjestetyn taulukon n‰yt‰lle.*/
/*#include <iostream> 
using namespace std;
struct koiratiedot
{
	char nimi[10];
	int ika;
};
int main()
{
	koiratiedot koira[5];
	int ind, i, j;
	for (ind = 0; ind < 5; ind++)
	{
		cout << "Anna" << ind + 1 << ". koiran nimi ja ik‰.";
		cin >> koira[ind].nimi >> koira[ind].ika;
	}
	for (ind = 0; ind < 5; ind++)
	{
		cout << koira[ind].nimi << " " << koira[ind].ika << endl;
	}
	
	

}*/
/*vaihtolajittelu
#include <iostream> 
using namespace std;
const int MAX_TAULU = 4;
int main()
{
	int taulu[MAX_TAULU] = { 2, 7, 1, 3 };
	int i, j;
	cout << "Tulosta tiedot ennen lajittelua" << endl;
	for (i = 0; i < MAX_TAULU; i++)
		cout << taulu[i] << " ";
	cout << "Lajitellaan..." << endl;
	for (i = 0; i < MAX_TAULU - 1; i++)
		for (j = i + 1; j < MAX_TAULU; j++)
			if (taulu[i] > taulu[j])
{
		int tmp = taulu[i];
		taulu[i] = taulu[j];
		taulu[j] = tmp;
}
	cout << "Tulosta tiedot lajittelun j‰lkeen" << endl;
	for (i = 0; i < MAX_TAULU; i++)
		cout << taulu[i] << " ";
			
}*/
//Esimerkki 9-14
#include <iostream> 
using namespace std;
int main()
{
	int luku[4] = { 2, 4, 5, 6 };
	int *osoitin; //M‰‰ritell‰‰n osoitin
	osoitin = &luku[0];//alustetaan osoitin
	cout << "\nLuku-muuttujan osoite on: " << osoitin;
	cout << "\nLuku-muuttujan osoite on: " << &luku[0];
	cout << "\nLuku-muuttujan sis‰ltˆ on: " << *osoitin;

	osoitin = &luku[1];//alustetaan osoitin
	cout << "\nLuku-muuttujan osoite on: " << osoitin;
	cout << "\nLuku-muuttujan osoite on: " << &luku[1];
	cout << "\nLuku-muuttujan sis‰ltˆ on: " << *osoitin;
	return 0;
}
