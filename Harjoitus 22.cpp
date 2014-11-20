/*Harjoitus 22 (Palautus vko 49)
Tee ohjelma, joka toimii henkilörekisterinä(max 10).
Ohjelma antaa käyttäjälle seuraavan valikon :

VALIKKO
0 Lopeta
1 Lisaa henkilo
2 Nayta kaikki henkilot

Tallenna henkilöiden tiedot tietuetaulukkoon.
Tallennettavia tietoja ovat
etunimi(merkkijono)
koulumatka(liukuluku)
hatun koko(kokonaisluku)

Toteuta ensin koko ohjelma pääohjelmana.

Tämän jälkeen lisää seuraavat aliohjelmat :
a) int Valikko(void);

b) void TulostaHenkilo(TIEDOT);
c) void TulostaKaikkiHenkilot(TIEDOT[], int lkm);
d) void LisaaHenkilo(TIEDOT[], int *lkm);*/

#include <iostream>
using namespace std;

const int MAX_TAULU = 10;
struct hlot
{
	char etunimi[10];
	float koulumatka;
	int hattu;
};
int kysyvalinta();
void tulostahenkilo(hlot);
void tulostakaikkihenkilot(hlot[], int lkm);
void lisaahenkilo(hlot[], int *lkm);
int main()
{
	hlot i[MAX_TAULU];
	
	
	do
	{

	{
		int valinta = kysyvalinta();
		if (valinta == 1)
		{

			cout << "Anna etunimi, koulumatkan pituus ja hatun koko: ";
			cin >> i[0].etunimi >> ws >> i[0].koulumatka >> ws >> i[0].hattu;
			

		}
		else if (valinta == 2)
		{
			tulostahenkilo();
			
		}
		else if (valinta == 3)
		{



		}
		else if (valinta == 0)
		{
			return 0;
		}
	}
	} while (true);
return 0;
}


int kysyvalinta()
{
	int valinta;
	cout << "Valikko";
	cout << "\n0Lopeta";
	cout << "\n1lisaa henkilo";
	cout << "\n2Nayta henkilo";
	cout << "\n3Nayta kaikki henkilot";
	cin >> valinta;
	return valinta;
}
void tulostahenkilo(hlot tietue)
{
	cout << "\nHenkilön tiedot: ";
	cout << tietue.etunimi << tietue.koulumatka << tietue.hattu;
}
void tulostakaikkihenkilot(hlot[], int lkm)
{

}
void lisaahenkilo(hlot[], int *lkm)
{

}