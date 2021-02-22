#include <iostream>
#include <string>
using namespace std;

class Dog {

    public:
        string breed;
        int age;
        string color;
        string petName;
        void displayDetails();

        Dog();
        Dog(string, string, int, string);

};

Dog :: Dog() {
    cout << "Dog object created\n";
}

Dog :: Dog(string petName, string breed, int age, string color){
	this->petName = petName;
	this->breed = breed;
	this->age =age;
	this->color = color;

}

void Dog :: displayDetails() {
    cout << "Dog's Pet Name: " << petName << endl << "Breed: " << breed << endl << "Age: " << age << endl << "Color: " << color <<"\n\n";
}


int main() {


    Dog dog1("Jackie","Dalmatian", 7,"White-black");

    dog1.displayDetails();

    Dog dog2("Pluto", "Beagle", 4, "Brown");

    dog2.displayDetails();

    return 0;
}
