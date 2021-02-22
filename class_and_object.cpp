#include <iostream>
#include <string>

using namespace std;

class Dog {
public:
	int age;
	string color;
	string breed;
	string petName;

	void DisplayDetails();
};

void Dog:: DisplayDetails(){
	cout <<"Dog's age: " << age << endl << "color: " << color << endl << "breed: " << breed << endl << "pet Name: " << petName << endl << endl;
}
int main()
{
	// create object of Dog class
	Dog dog1;

	// access attributes and set values
	dog1.age = 15;
	dog1.color = "White";
	dog1.breed = "Dalmation";
	dog1.petName = "Oreio";

	dog1.DisplayDetails();

	// create second object of Dog class
	Dog dog2;

	// access attributes and set values
	dog2.age = 20;
	dog2.color = "Black";
	dog2.breed = "Beagle";
	dog2.petName = "Sheru";


	dog2.DisplayDetails();

  return 0;
}
