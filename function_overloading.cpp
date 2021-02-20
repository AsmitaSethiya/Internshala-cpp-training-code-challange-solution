#include <iostream>
#include <string>
using namespace std;

void add(int, int);
void add(string, string);
void add(int, int, int);


int main() {

	add(10, 20);
	add("Hello", "World");
	add(10, 20, 30);

	return 0;
}

void add(int num1, int num2){
	cout << num1 + num2 << endl;
}

void add(string s1, string s2){
	cout << s1 + " " + s2 << endl;
}

void add(int num1, int num2, int num3){
	cout << num1 + num2 + num3 << endl;
}
