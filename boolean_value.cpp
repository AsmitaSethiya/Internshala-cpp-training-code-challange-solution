#include <iostream>
#include <string>

using namespace std;

string getFullName(string, string);

int main() {

	bool isCodingFun = true;
	if ( isCodingFun )
	{
		cout << "Let's code more.\n";
	}
	else
	{
		cout << "Find another job.\n";
	}

	int x = 10,  y =20;
	bool b1 = x > y;
	bool b2 = x < y;
	bool b3 = x == y;

	cout << "b1:" << b1 << endl;
	cout << "b2:" << b2 << endl;
	cout << "b3:" << b3 << endl;

	return 0;
}
