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

	int un_st = 0;
	int deux_st = 0;
	int trois_st = 0;
	int haut_ligne = 0;
	int millieu_ligne = 0;
	int bas_ligne = 0;


	int debut = 0;
	cout << "A partir de combien de resultats successifs souhaites tu commencer les 1 chance sur 2: ";
	cin >> debut;

	double miseInitiale(0);
	cout << "Pour quelle mise initiale : ";
	cin >> miseInitiale;

	double multiplicateur(0);
	cout << "Pour quelle multiplicateur : ";
	cin >> multiplicateur;
	cout << endl;

	int debut2 = 0;
	cout << "A partir de combien de resultats successifs souhaites tu commencer les 1 chance sur 3: ";
	cin >> debut2;

	double miseInitiale2(0);
	cout << "Pour quelle mise initiale : ";
	cin >> miseInitiale2;

	double multiplicateur2(0);
	cout << "Pour quelle multiplicateur : ";
	cin >> multiplicateur2;
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
		
		if (result == 0) {
			cout << "le chiffre entre est 0 rien ne se passe";
			cout << endl;
		}
		else {
			bool is_pair = result % 2 == 0;
			bool is_rouge = result == 1 || result == 3 || result == 5 || result == 7 || result == 9 || result == 12 || result == 14 || result == 16 || result == 18 || result == 19 || result == 21 || result == 23 || result == 25 || result == 27 || result == 30 || result == 32 || result == 34 || result == 36;
			bool is_premier_moitie = result >= 1 && result <= 18;
			bool is_un_st = result >= 1 && result <= 12;
			bool is_deux_st = result >= 13 && result <= 24;
			bool is_trois_st = result >= 25 && result <= 36;
			bool is_haut_ligne = result % 3 == 0;
			bool is_millieu_ligne = result % 3 == 2;
			bool is_bas_ligne = result % 3 == 1;

			if (is_pair) {
				++pair;
				impair = 0;
			}
			else {
				pair = 0;
				++impair;
			}
			if (is_rouge) {
				++rouge;
				noir = 0;
			}
			else {
				rouge = 0;
				++noir;
			}
			if (is_premier_moitie) {
				++premier_moitie;
				seconde_moitie = 0;
			}
			else {
				premier_moitie = 0;
				++seconde_moitie;
			}
			if (is_un_st) {
				un_st = 0;
			}
			else {
				++un_st;
			}
			if (is_deux_st) {
				deux_st = 0;
			}
			else {
				++deux_st;
			}
			if (is_trois_st) {
				trois_st = 0;
			}
			else {
				++trois_st;
			}
			if (is_haut_ligne) {
				haut_ligne = 0;
			}
			else {
				++haut_ligne;
			}
			if (is_millieu_ligne) {
				millieu_ligne = 0;
			}
			else {
				++millieu_ligne;
			}
			if (is_bas_ligne) {
				bas_ligne = 0;
			}
			else {
				++bas_ligne;
			}
		}
		
bool evenementApparu = false;

for (int i = 0; i <= 100; i++)
{
	double mise2 = miseInitiale2 * pow(multiplicateur2, i);
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
	if (un_st == debut2 + i) {
        cout << "Mise " << mise2 << " euro sur 1 ST 12" << endl;
        evenementApparu = true;
    }
	if (deux_st == debut2 + i) {
        cout << "Mise " << mise2 << " euro sur 2 ND 12" << endl;
        evenementApparu = true;
    }
	if (trois_st == debut2 + i) {
        cout << "Mise " << mise2 << " euro sur 3 RD 12" << endl;
        evenementApparu = true;
    }
	if (haut_ligne == debut2 + i) {
        cout << "Mise " << mise2 << " euro sur la premiere ligne 2 TO 1" << endl;
        evenementApparu = true;
    }
	if (millieu_ligne == debut2 + i) {
        cout << "Mise " << mise2 << " euro sur la deuxieme ligne 2 TO 1" << endl;
        evenementApparu = true;
    }
	if (bas_ligne == debut2 + i) {
        cout << "Mise " << mise2 << " euro sur la troisieme ligne 2 TO 1" << endl;
        evenementApparu = true;
    }
    else if ((evenementApparu == false) && (i == 100))
    {
        cout << "Ne mise pas !" << endl;
    }
}
		cout << endl;

	}
	return 0;
}
