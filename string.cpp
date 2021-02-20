#include <iostream>
#include <string>
using namespace std;

string getFullName(string, string);

int main() {

	string firstName = "Asmita";
	string lastName = "Sethiya";

	string fullName = getFullName(firstName, lastName);


    char letter = firstName[1];
    cout << letter << endl;

    string nickName;
    cout << "Enter nick Name: ";
    getline(cin, nickName);
    cout << nickName << endl;

    int length = firstName.length();
    cout << length << endl;

    int result = firstName.compare(lastName);
    cout << result << endl;

    string concat = firstName.append(lastName);
    cout << concat << endl;

    firstName = "Saksham";
    cout << firstName;

	return 0;
}

string getFullName(string firstName, string lastName){
	string fullName = firstName + lastName;
	return fullName;
}
