#include "Rectangle.h"

int main() {
	setlocale(0, "UKR");

	// Основні елементи
	/*Rectangle r1 = Rectangle(5, 5);

	string r1STR = r1;

	cout << "Str = " << r1STR << endl;
	cout << "r1++ = " << r1++ << endl;
	cout << "r1-- = " << r1-- << endl;
	cout << "++r1 = " << ++r1 << endl;
	cout << "--r1 = " << --r1 << endl;

	for (int i = 0; i < 5; i++)
		cout << --r1 << endl;

	cout << "r1*5 = " << r1 * 5 << endl;

	Rectangle r = r1STR;

	cout << r << endl;

	if (r)
		cout << "Квадрат" << endl;


	Rectangle rectangle1 = r1STR;
	Rectangle rectangle2(10, 10);

	cout << "Сума прямокутникiв: " << rectangle1 + rectangle2 << endl;
	cout << "Число + прямокутник:" << 10 + rectangle1 << endl;
	cout << "Прямокутник + число " << rectangle1 + 10 << endl;*/

	// Індексація та +=
	/*Rectangle rr;
	
	cout << "Створено новий об'єкт Rectangle: " << rr << endl;

	cout << "Введiть значення для полiв Rectangle (Перша сторона, друга сторона): "; cin >> rr;

	cout << "Прямокутник пiсля введення: " << rr << endl;

	cout << "rr[0] = " << rr[0] << endl;

	rr[0] = 10;

	cout << "rr[0] має дорiвнювати 10: " << rr[0] << endl;

	(rr += 5)+=10;
	cout << "Результат (rr += 5)+=10 = " << rr << endl;*/

	//Логіні операції

	/*Rectangle r1(10, 20), r2(5, 10);

	bool a = r1 == r2;
	cout << "r1 == r2 " << a << endl;

	a = r1 >= r2;
	cout << "r1 >= r2 " << a << endl;

	a = r1 > r2;
	cout << "r1 > r2 " << a << endl;

	a = r1 <= r2;
	cout << "r1 <= r2 " << a << endl;

	a = r1 < r2;
	cout << "r1 < r2 " << a << endl;

	a = r1 != r2;
	cout << "r1 != r2 " << a << endl;*/

	Rectangle rectangles[5];

	for (int i = 0; i < 5; i++) {
		cout << "Введiть " << i + 1 << " прямокутник: ";
		cin >> rectangles[i];
	}

	Rectangle::Show();
	for (int i = 0; i < 5; i++)
		cout << rectangles[i] << endl;


}