/*Muokkaa edellist� ohjelmaa siten, ett� edell� m��ritelty� tietuetyyppi� k�ytet��n my�s kahden muun "koululaisen" tietojen tallentamiseen.
N�iden kahden muun koululaisen tiedot alustetaan ao.muuttujien m��rittelyn yhteydess�.
Ainoastaan yhden koululaisen tiedot kysyt��n k�ytt�j�lt� edellisen teht�v�n tapaan.
Tulosta kolmen koululaisen tiedot koulumatkan mukaisessa suuruusj�rjestyksess�(pienimm�st� suurimpaan) n�yt�lle*/
#include <iostream>
using namespace std;
#include <cstring>
struct hl�t
{
	char etunimi[20];
	int kengannumero;
	char sukunimi[15];
	float koulumatka;
	char osoite[30];
	int postinumero;

};
int main()
{
	hl�t oppilas{ "Mikki", 33, "Hiiri", 5.4, "Hiirikatu 2", 40200 };
	hl�t oppilas2{ "Mestari", 44, "Mies", 10.4, "Mestarinkatu", 40400 };
	hl�t i;
	cout << "Anna kaikki Etunimesi, kengannumero, sukunimi, koulumatkan pituus, osoite ja postinumero.""(Etunimien/etunimen ja osoitteen j�lkeen, paina ENTER, muulloin v�lily�nti�)";

	cin.get(i.etunimi, 20)
		>> ws >> i.kengannumero
		>> ws >> i.sukunimi
		>> ws >> i.koulumatka;
	cin.get(i.osoite, 30)
		>> ws >> i.postinumero;

	if ((i.koulumatka <= oppilas.koulumatka) && (i.koulumatka <= oppilas2.koulumatka)) {
		if (oppilas.koulumatka <= oppilas2.koulumatka) {
			cout << "Koulumatkat suuruusj�rjestyksess�: " << i.etunimi <<  ", " << oppilas.etunimi << ", " << oppilas2.etunimi << "." << endl;
		}
		else {
			cout << "Koulumatkat suuruusj�rjestyksess�: " << i.etunimi << ", " << oppilas2.etunimi << ", " << oppilas.etunimi << "." << endl;
		}
	}
	else if ((oppilas2.koulumatka <= i.koulumatka) && (oppilas2.koulumatka <= oppilas2.koulumatka)) {
		if (i.koulumatka <= oppilas2.koulumatka) {
			cout << "Koulumatkat suuruusj�rjestyksess�:  " << oppilas.etunimi << ", " << i.etunimi << ", " << oppilas2.etunimi << "." << endl;
		}
		else {
			cout << "Koulumatkat suuruusj�rjestyksess�:  " << oppilas.etunimi << ", " << oppilas2.etunimi << ", " << i.etunimi << "." << endl;
		}
	}
	else if ((oppilas2.koulumatka <= i.koulumatka) && (oppilas2.koulumatka <= oppilas2.koulumatka)) {
		if (oppilas.koulumatka <= i.koulumatka){
			cout << "Koulumatkat suuruusj�rjestyksess�: " << oppilas2.etunimi << "," << oppilas.etunimi << "," << i.etunimi << "," << endl;
		}
		else {
			cout << "Koulumatkat suuruusj�rjestyksess�: " << oppilas2.etunimi << "," << i.etunimi << "," << oppilas.etunimi << "," << endl;
		}
	}

	return 0;
}