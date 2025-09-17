#include "Rectangle.h"



void Rectangle::WhileNotNormal(double& num) {

	while (num <= 0) {
		cout << "Невiрно задано сторону введiть знову: ";
		cin >> num;
	}
}

Rectangle::Rectangle(double a, double b) {
	WhileNotNormal(a);
	WhileNotNormal(b);

	this->a = a;
	this->b = b;
}

Rectangle::Rectangle() { a = 0; b = 0; }






double Rectangle::P() {

	if (a == 0 || b == 0) {
		cout << "Недостатньо значень сторiн для периметру" << endl;
		return 0;
	}
	return 2 * (a + b);
}

double Rectangle::S() {
	if (a == 0 || b == 0) {
		cout << "Недостатньо значень сторiн для площi." << endl;
		return 0;
	}

	return a * b;
}





void Rectangle::setA() {
	cout << "Введiть сторону a: ";
	cin >> this->a;
	WhileNotNormal(a);
}

void Rectangle::setB() {
	cout << "Введiть сторону b: ";
	cin >> this->b;
	WhileNotNormal(b);
}

void Rectangle::setSizes() {
	this->setA();
	this->setB();
}





double Rectangle::getA() {
	return a;
}
double Rectangle::getB() {
	return b;
}

void Rectangle::getSizes() {
	if (IsSquare())
		cout << "Квадрат\n";
	else
		cout << "Прямокуник\n";
	cout << "Довжина сторони a: " << getA() << ", дожина сторни b:" << getB() << endl;

}




bool Rectangle::IsSquare() {
	if (a == 0 || b == 0) {
		cout << "Недостатньо значень сторiн для визначення того чи квадрат." << endl;
		return false;
	}

	return a == b;
}