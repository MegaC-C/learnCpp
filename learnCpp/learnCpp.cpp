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

