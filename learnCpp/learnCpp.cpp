// learnCpp.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {

	double input, sum = 0, min = 99999999999, max = -999999999999;
	double meter = 0;
	int count = 0;
	vector<double> values;
	string einheit;
	while (cin >> input >> einheit) {
		cout << input << einheit << " = ";

		if (einheit == "cm") meter = input / 100;
		else if (einheit == "in") meter = input / 40;
		else if (einheit == "ft") meter = input / 3;
		else if (einheit == "m") meter = input;

		if (einheit == "cm" || einheit == "in" || einheit == "ft" || einheit == "m") {
			values.push_back(meter);
			sort(values.begin(), values.end());
			sum += meter;
			if (meter < min) min = meter;
			if (meter > max) max = meter;
			cout << meter << " meter" << "\nsumme: " << sum << "\nanzahl: " << values.size() << "\nmax: " << max
				<< "\nmin: " << min << endl;
			for (int i = 0; i < values.size(); ++i) {
				cout << values[i] << endl;
			}

		}
		else cout << "falsche einheit" << endl;



	}

}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
