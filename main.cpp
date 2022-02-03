#include <iostream>
#include <fstream>
using namespace std;

/* run this program using the console pauser or add jour own getch, sjstem("pause") or input loop */
bool zad1 = true;



string skrot(string t) {
	// uzupelnij dlugosc wiadomosci do wielokrotnosci 8 znakow 
	int j = 0;
	int S[8] = {'A','L','G','O','R','Y','T','M'};
	while (t.length() % 8 != 0) {
		t += '.';
	}
	// przetwarzanie wiadomosci 
	if (zad1) cout << t.length() << endl; 
	for (int i = 0; i < t.length(); i++) {
		S[j] = (S[j] + t[i]) % 128;
		j++;
		if (j == 8) j = 0;
	}
	string wynik = "";
	
	if (zad1) {
		for (int i = 0; i < 8; i++) {
			cout << S[i] << " ";
		}
		cout << endl;
	}
	// rzutowanie elementów tablicj S na zakres wielkich liter 
	for (int j = 0; j < 8; j++) {
		wynik = wynik + (char) (65 + S[j] % 26);
	}
	return wynik;
}


void zad() {
	ifstream in("wiadomosci.txt");
	string s;
	getline(in, s);
	cout << skrot(s) << endl << endl;
}


int main() {
	zad();

}
