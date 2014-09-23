/*Sami Liimatainen
IIO14S1
Harjoitus 9
Versio 1
23.9.2014

Tee ohjelma, joka toimii laskimena.
Käyttäjältä kysytään kaksi kokonaislukua,
jonka jälkeen ohjelma antaa valikon
laskutoimituksista. Valikko nayttaa
seuraavalta:

VALIKKO
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos

Lopuksi ohjelma tulostaa valitun tuloksen naytölle.

*/

#include <iostream>
using namespace std;
int main()
{
	int luku1;
	int luku2;
	int lasku;
	int Summa = 0, Erotus = 0, Tulo = 0, Osamaara = 0, Jaannos = 0;

	cout << "Anna ensimmäinen luku ";
	cin >> luku1;

	cout << "Anna toinen luku ";
	cin >> luku2;

	cout << "\nAnna laskutoimitus (valitse numero 1-5) \n1 Summa \n2 Erotus \n3 Tulo \n4 Osamaara \n5 Jakojaannos\n";
	cin >> lasku;
	cout << endl;

	if (lasku == 1)
	{	Summa = luku1 + luku2;
	cout <<"Summa on " <<Summa;}

	if (lasku == 2)
	{	Erotus = luku1 - luku2;
	cout <<"Erotus on " << Erotus;
	}

	if (lasku == 3)
	{	Tulo = luku1 * luku2;
	cout <<"Tulo on " << Tulo;
	}

	if (lasku == 4)
	{	Osamaara = luku1 / luku2;
	cout <<"Osamaara on " << Osamaara;
	}

	if (lasku == 5)
	{	Jaannos = luku1 % luku2;
	cout <<"Jakojaannos on " << Jaannos;
	}

	cout << endl <<endl ;
}