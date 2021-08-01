
#include <iostream>
#include <cmath> // for sqrt() and isnan()
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	float a = sqrt(2);
	float b = sqrt(-2);

	isnan(a) ? cout << "Its NaN" << endl :
		cout << "Its a real number" << endl;

	isnan(b) ? cout << "Its NaN" << endl :
		cout << "Its a real number" << endl;

	_getch();
	return 0;
}
