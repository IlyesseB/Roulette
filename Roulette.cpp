#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int pair = 0, rouge = 0, premier_moitie = 0, impair = 0, noir = 0, seconde_moitie = 0, un_st = 0, deux_st = 0, trois_st = 0, haut_ligne = 0, millieu_ligne = 0, bas_ligne = 0, debut = 10, debut2 = 17, debut3 = 325;  double miseInitiale = 0.10, multiplicateur = 2, multiplicateur2 = 1.5, multiplicateur3 = 1.03; 
    int chiffres[36] = {0}; for (int i = 0; i < 36; i++) { chiffres[i] = 0; }
    for (int i = 0; i < 100; ++i) { int result;
        do { cout << "Entrez le resultat du tour de roulette : "; cin >> result; } 
		while (result < 0 || result > 36);
        if (result == 0) { for (int i = 1; i < 36; i++) { ++chiffres[i]; } chiffres[0] = 0; }
        else { bool is_pair = result % 2 == 0; bool is_rouge = result == 1 || result == 3 || result == 5 || result == 7 || result == 9 || result == 12 || result == 14 || result == 16 || result == 18 || result == 19 || result == 21 || result == 23 || result == 25 || result == 27 || result == 30 || result == 32 || result == 34 || result == 36, is_premier_moitie = result >= 1 && result <= 18, is_un_st = result >= 1 && result <= 12, is_deux_st = result >= 13 && result <= 24, is_trois_st = result >= 25 && result <= 36, is_haut_ligne = result % 3 == 0, is_millieu_ligne = result % 3 == 2, is_bas_ligne = result % 3 == 1, is_chiffre = false; int index = -1; for (int i = 0; i < 36; i++) { if (i == result) { is_chiffre = true; index = i; break; } }
        if (is_chiffre) { for (int i = 0; i < 36; i++) { if (i == index) { chiffres[i] = 0; for (int j = 0; j < 36; j++) { if (j != i) { chiffres[j]++;} } break; } } }
        if (is_pair) { ++pair; impair = 0; } else { pair = 0; ++impair; }
        if (is_rouge) { ++rouge; noir = 0; } else { rouge = 0; ++noir; }
        if (is_premier_moitie) { ++premier_moitie; seconde_moitie = 0; } else { premier_moitie = 0; ++seconde_moitie; }
        if (is_un_st) { un_st = 0; } else { ++un_st; }
		if (is_deux_st) { deux_st = 0; } else { ++deux_st; }
		if (is_trois_st) { trois_st = 0; } else { ++trois_st; }
		if (is_haut_ligne) { haut_ligne = 0; } else { ++haut_ligne; }
		if (is_millieu_ligne) { millieu_ligne = 0; } else { ++millieu_ligne; }
		if (is_bas_ligne) { bas_ligne = 0; } else { ++bas_ligne; } }
        bool evenementApparu = false;
        for (int i = 0; i <= 100; i++) { double mise = miseInitiale * pow(multiplicateur, i), mise2 = miseInitiale * pow(multiplicateur2, i), mise3 = miseInitiale * pow(multiplicateur3, i);
            for (int k = 0; k < 36; k++) { if (chiffres[k] == debut3 + i) { cout << "Mise " << round(mise3 * pow(10, 1)) / pow(10, 1) << " euro sur le chiffre " << k << endl; evenementApparu = true; } }
            if (pair == debut + i) { cout << "Mise " << mise << " euro sur impair" << endl; evenementApparu = true; }
            if (impair == debut + i) { cout << "Mise " << mise << " euro sur pair" << endl; evenementApparu = true; }
            if (rouge == debut + i) { cout << "Mise " << mise << " euro sur noir" << endl; evenementApparu = true; }
            if (noir == debut + i) { cout << "Mise " << mise << " euro sur rouge" << endl; evenementApparu = true; }
            if (premier_moitie == debut + i) { cout << "Mise " << mise << " euro sur passe" << endl; evenementApparu = true; }
            if (seconde_moitie == debut + i) { cout << "Mise " << mise << " euro sur manque" << endl; evenementApparu = true; }
            if (un_st == debut2 + i) { cout << "Mise " << round(mise2 * pow(10, 1)) / pow(10, 1) << " euro sur 1 ST 12" << endl; evenementApparu = true; }
			if (deux_st == debut2 + i) { cout << "Mise " << round(mise2 * pow(10, 1)) / pow(10, 1) << " euro sur 2 ND 12" << endl; evenementApparu = true; }
			if (trois_st == debut2 + i) { cout << "Mise " << round(mise2 * pow(10, 1)) / pow(10, 1) << " euro sur 3 RD 12" << endl; evenementApparu = true; }
			if (haut_ligne == debut2 + i) { cout << "Mise " << round(mise2 * pow(10, 1)) / pow(10, 1) << " euro sur la premiere ligne 2 TO 1" << endl; evenementApparu = true; }
			if (millieu_ligne == debut2 + i) { cout << "Mise " << round(mise2 * pow(10, 1)) / pow(10, 1) << " euro sur la deuxieme ligne 2 TO 1" << endl; evenementApparu = true; }
			if (bas_ligne == debut2 + i) { cout << "Mise " << round(mise2 * pow(10, 1)) / pow(10, 1) << " euro sur la troisieme ligne 2 TO 1" << endl; evenementApparu = true; } }
            if (!evenementApparu) { cout << "Ne mise pas !" << endl; }
            cout << endl; }
    return 0; }