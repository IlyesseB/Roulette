#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int pair = 0;
	int rouge = 0;
	int premier_moitie = 0;
	int impair = 0;
	int noir = 0;
	int seconde_moitie = 0;

	int debut = 0;
	cout << "A partir de combien de resultats successifs souhaites tu commencer : ";
	cin >> debut;

	double miseInitiale(0);
	cout << "Pour quelle mise initiale : ";
	cin >> miseInitiale;

	double multiplicateur(0);
	cout << "Pour quelle multiplicateur : ";
	cin >> multiplicateur;
	cout << endl;

	for (int i = 0; i < 100; ++i)
	{
	cout << "Entrez le resultat du tour de roulette : ";
	int result;
	while (true) {
		cin >> result;
		if (result >= 0 && result <= 36) {
			break;
		}
		cout << "Le nombre doit etre compris entre 0 et 36" << endl;
		cout << "Entrez le resultat du tour de roulette : ";
	}
	cout << endl;

		bool is_even = result % 2 == 0;
		bool is_red = result == 1 || result == 3 || result == 5 || result == 7 || result == 9 || result == 12 || result == 14 || result == 16 || result == 18 || result == 19 || result == 21 || result == 23 || result == 25 || result == 27 || result == 30 || result == 32 || result == 34 || result == 36;
		bool is_first_half = result >= 1 && result <= 18;

		if (is_even)
		{
			++pair;
			impair = 0;
		}
		else
		{
			pair = 0;
			++impair;
		}
		if (is_red)
		{
			++rouge;
			noir = 0;
		}
		else
		{
			rouge = 0;
			++noir;
		}
		if (is_first_half)
		{
			++premier_moitie;
			seconde_moitie = 0;
		}
		else
		{
			premier_moitie = 0;
			++seconde_moitie;
		}

bool evenementApparu = false;

for (int i = 0; i <= 10; i++)
{
    double mise = miseInitiale * pow(multiplicateur, i);

    if (pair == debut + i) {
        cout << "Mise " << mise << " euro sur impair" << endl;
        evenementApparu = true;
    }
    if (impair == debut + i) {
        cout << "Mise " << mise << " euro sur pair" << endl;
        evenementApparu = true;
    }
    if (rouge == debut + i) {
        cout << "Mise " << mise << " euro sur noir" << endl;
        evenementApparu = true;
    }
    if (noir == debut + i) {
        cout << "Mise " << mise << " euro sur rouge" << endl;
        evenementApparu = true;
    }
    if (premier_moitie == debut + i) {
        cout << "Mise " << mise << " euro sur passe" << endl;
        evenementApparu = true;
    }
    if (seconde_moitie == debut + i) {
        cout << "Mise " << mise << " euro sur manque" << endl;
        evenementApparu = true;
    }
    else if ((evenementApparu == false) && (i == 10))
    {
        cout << "Ne mise pas !" << endl;
    }
}
		cout << endl;

	}
	return 0;
}
