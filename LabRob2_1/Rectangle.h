#pragma once
#include <iostream>
#include <string>


using namespace std;

class Rectangle
{
private:
	double a, b;

public:

	Rectangle();

	Rectangle(double a, double b);

	double P();
	double S();

	void setSizes();
	void setA();
	void setB();

	void getSizes();
	double getA();
	double getB();

	bool IsSquare();

	void WhileNotNormal(double& num);

	Rectangle& operator++();
	Rectangle& operator--();

	Rectangle operator++(int);
	Rectangle operator--(int);

	operator bool();

	Rectangle operator*(int scalar);

	operator string();

	Rectangle operator+(const Rectangle& r2);

	Rectangle operator+(int side);

	friend Rectangle operator+(int side, const Rectangle& r2);


	Rectangle(const string& str);

	friend ostream& operator<<(ostream& out, const Rectangle& r);
};
