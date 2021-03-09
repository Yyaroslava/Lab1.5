//////////////////////////////////////////////
// Triad.cpp 
// ���� ��������� � ��������� ������ �����
#include "Triad.h"
#include <iostream>

using namespace std;

void Triad::Init(int firstValue, int secondValue, int thirdValue) {
	setFirst(firstValue);
	setSecond(secondValue);
	setThird(thirdValue);
}

void Triad::Display() const {
	cout << first << "." << second << "." << third << endl;
}

void Triad::Read() {
	int firstValue;
	int secondValue;
	int thirdValue;
	cout << "Enter triad " << endl << endl;
	cout << "first = ? "; cin >> firstValue;
	cout << "second = ? "; cin >> secondValue;
	cout << "third = ? "; cin >> thirdValue;
	Init(firstValue, secondValue, thirdValue);
}
	stringstream sout;
	sout << first << "." << second << "." << third;
	return sout.str();
}