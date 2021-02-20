#include <iostream>
#include <string>
using namespace std;

int main() {


	string name;
	char dollar;
	float gdp;
	int year;

	cout << "Enter Country name: ";
	getline(cin, name);

	cout << "Enter dollar sign: ";
	cin >> dollar;

	cout << "Enter gdp: ";
	cin >> gdp;

	cout << "Enter year: ";
	cin >> year;

	cout << "As economic reforms picked up the pace, " << name << "'s GDP grew five-fold to reach US" << dollar << gdp <<" trillion in " << year << " (as per IMF estimates).";

	return 0;
}
