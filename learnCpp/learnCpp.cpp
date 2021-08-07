#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
	vector < double >temp;
	for (double t; cin >> t;)
		temp.push_back(t);
	sort(temp.begin();
		 temp.end();
		);
  for (double x:temp)
		cout << x << endl;






}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne
// Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"
