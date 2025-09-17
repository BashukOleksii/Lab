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
};
