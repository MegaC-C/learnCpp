#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


double check(bool x, int i, double middle) {
	if (x) return middle - (50.0 / pow(2, i));
	else return middle + (50.0 / pow(2, i));
}


int main() {

	while (1) {
		double mid = 50;
		char jein;		
		bool smaller;
		cout << "Denk an eine Nummer zwischen 0 und 100" << endl;

		for (int i = 1; i < 8; ++i) {

			cout << "Ist die Nummer kleiner als " << mid << " ? (j)a oder (n)ein ?" << endl;
			cin >> jein;
			if (jein == 'j') smaller = true;
			else smaller = false;
			mid = check(smaller, i, mid);
		}

		cout << "Deine Nummer ist:  " <<  round(mid) << endl << endl << endl;
	}

	

	

}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

