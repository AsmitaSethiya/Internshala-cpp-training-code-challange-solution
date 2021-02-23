#include<iostream>

using namespace std;

class Shape{
	virtual double getArea() = 0;

	virtual double getPerimeter() = 0;
};

class Square : public Shape{
public:
	float side;

	virtual double getArea(){
		return side* side;
	}

	virtual double getPerimeter(){
		return 4 * side;
	}
};

class Rectangle : public Shape{
public:
	float length;
	float width;

	virtual double getArea(){
		return length * width;
	}

	virtual double getPerimeter(){
		return 2 * (length + width);
	}
};

class Circle : public Shape{
public :
	float radius;

	virtual double getArea(){
		return 3.14 * radius * radius;
	}

	virtual double getPerimeter(){
		return 2 * 3.14 * radius;
	}

};

class Triangle : public Shape{
public:
	float b;
	float h;
	float side1;
	float side2;

	virtual double getArea(){
		return (b * h) / 2;
	}

	virtual double getPerimeter(){
		return b + side1 + side2;
	}
};

int main(){

	Circle c;
	c.radius =4;
	cout << "The area of circle is: " << c.getArea() << endl;
	cout << "The perimeter of circle is: " << c.getPerimeter();

	return 0;

}

