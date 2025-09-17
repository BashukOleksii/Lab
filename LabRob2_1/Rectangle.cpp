#include "Rectangle.h"



void Rectangle::WhileNotNormal(double& num) {

	while (num <= 0) {
		cout << "���i��� ������ ������� ����i�� �����: ";
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
		cout << "����������� ������� ����i� ��� ���������" << endl;
		return 0;
	}
	return 2 * (a + b);
}

double Rectangle::S() {
	if (a == 0 || b == 0) {
		cout << "����������� ������� ����i� ��� ����i." << endl;
		return 0;
	}

	return a * b;
}





void Rectangle::setA() {
	cout << "����i�� ������� a: ";
	cin >> this->a;
	WhileNotNormal(a);
}

void Rectangle::setB() {
	cout << "����i�� ������� b: ";
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
		cout << "�������\n";
	else
		cout << "����������\n";
	cout << "������� ������� a: " << getA() << ", ������ ������ b:" << getB() << endl;

}




bool Rectangle::IsSquare() {
	if (a == 0 || b == 0) {
		cout << "����������� ������� ����i� ��� ���������� ���� �� �������." << endl;
		return false;
	}

	return a == b;
}