/*Muokkaa edellistä ohjelmaa siten, että edellä määriteltyä tietuetyyppiä käytetään myäs kahden muun "koululaisen" tietojen tallentamiseen.
Näiden kahden muun koululaisen tiedot alustetaan ao.muuttujien määrittelyn yhteydessä.
Ainoastaan yhden koululaisen tiedot kysytään käyttäjältä edellisen tehtävän tapaan.
Tulosta kolmen koululaisen tiedot koulumatkan mukaisessa suuruusjärjestyksessä(pienimmästä suurimpaan) näytälle*/
#include <iostream>
using namespace std;
#include <cstring>
struct hlöt
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
	hlöt oppilas{ "Mikki", 33, "Hiiri", 5.4, "Hiirikatu 2", 40200 };
	hlöt oppilas2{ "Mestari", 44, "Mies", 10.4, "Mestarinkatu", 40400 };
	hlöt i;
	cout << "Anna kaikki Etunimesi, kengannumero, sukunimi, koulumatkan pituus, osoite ja postinumero.""(Etunimien/etunimen ja osoitteen jälkeen, paina ENTER, muulloin välilyöntiä)";

	cin.get(i.etunimi, 20)
		>> ws >> i.kengannumero
		>> ws >> i.sukunimi
		>> ws >> i.koulumatka;
	cin.get(i.osoite, 30)
		>> ws >> i.postinumero;

	if ((i.koulumatka <= oppilas.koulumatka) && (i.koulumatka <= oppilas2.koulumatka)) {
		if (oppilas.koulumatka <= oppilas2.koulumatka) {
			cout << "Koulumatkat suuruusjärjestyksessä: " << i.etunimi <<  ", " << oppilas.etunimi << ", " << oppilas2.etunimi << "." << endl;
		}
		else {
			cout << "Koulumatkat suuruusjärjestyksessä: " << i.etunimi << ", " << oppilas2.etunimi << ", " << oppilas.etunimi << "." << endl;
		}
	}
	else if ((oppilas2.koulumatka <= i.koulumatka) && (oppilas2.koulumatka <= oppilas2.koulumatka)) {
		if (i.koulumatka <= oppilas2.koulumatka) {
			cout << "Koulumatkat suuruusjärjestyksessä:  " << oppilas.etunimi << ", " << i.etunimi << ", " << oppilas2.etunimi << "." << endl;
		}
		else {
			cout << "Koulumatkat suuruusjärjestyksessä:  " << oppilas.etunimi << ", " << oppilas2.etunimi << ", " << i.etunimi << "." << endl;
		}
	}
	else if ((oppilas2.koulumatka <= i.koulumatka) && (oppilas2.koulumatka <= oppilas2.koulumatka)) {
		if (oppilas.koulumatka <= i.koulumatka){
			cout << "Koulumatkat suuruusjärjestyksessä: " << oppilas2.etunimi << "," << oppilas.etunimi << "," << i.etunimi << "," << endl;
		}
		else {
			cout << "Koulumatkat suuruusjärjestyksessä: " << oppilas2.etunimi << "," << i.etunimi << "," << oppilas.etunimi << "," << endl;
		}
	}

	return 0;
}