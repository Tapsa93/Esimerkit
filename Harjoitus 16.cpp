//**************
//Tapio Pekkarinen
//Harjoitus 16
//23.10.2014
//Versio 1.0
/*Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen. 
Tietueeseen talletetaan seuraavat tiedot: etunimi (merkkijono; C:n merkkitaulukko) sukunimi (merkkijono; C:n merkkitaulukko)
koulumatka (reaaliluku) osoite (merkkijono; C:n merkkitaulukko)
postinumero (merkkijono; C:n merkkitaulukko) kengannumero (kokonaisluku)
Ohjelma tulostaa lopuksi tietueen tiedot naytölle.*/

#include <iostream>
using namespace std;
#include <cstring>
struct kaikki
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
	char väli[2] = " ";
	kaikki i;
	cout << "Anna Etunimesi, kengannumero, sukunimi, koulumatkan pituus, osoite ja postinumero.""(Syota edellä mainitussa jarjestyksessa)";
	cin >> ws >> i.etunimi
		>> ws >> i.kengannumero 
		>> ws >> i.sukunimi
		>> ws >> i.koulumatka
		>> ws >> i.osoite
		>> ws >> i.postinumero;
	cout << "Sukunimesi " << i.sukunimi << endl 
		<< "Etunimet " << i.etunimi << endl
		<< "Osoite " << i.osoite << endl 
		<< "Postinumero " << i.postinumero << endl 
		<< "Kengannumero " << i.kengannumero<< endl 
		<< "Koulumatkan pituus " << i.koulumatka << "Km";
	
	return 0;
}


	
	
