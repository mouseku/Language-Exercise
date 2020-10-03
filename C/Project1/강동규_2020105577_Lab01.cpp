#include <iostream>
using namespace std;

// 기초문제 1
/*
int main() {
	int x, y;
	x = 10;
	y = 20;
	cout << x << endl;
	cout << y << endl;
}
*/

// 기초문제 2
/*
int main() {
	unsigned short siX;
	unsigned iX;
	long liX;
	long long lliX;
	cout << "sizeof(siX):" << sizeof(siX) << endl;
	cout << "sizeof(iX):" << sizeof(iX) << endl;
	cout << "sizeof(liX):" << sizeof(liX) << endl;
	cout << "sizeof(lliX):" << sizeof(lliX) << endl;
}
*/

// 기초문제 3
/*
int main() {
	cout << "(7 == 5):" << (7 == 5) << endl;
	cout << "(7 >= 5):" << (7 >= 5) << endl;
	cout << "(7 != 5):" << (7 != 5) << endl;
	cout << "(7 <= 5):" << (7 <= 5) << endl;
	cout << "(7 >= 5 ? 100 : -100):" << (7 >= 5 ? 100 : -100) << endl;
}
*/

// 기초문제 4
/*
int main() {
	const float PI = 3.14;
	char ch1 = 65;
	char ch2 = ch1 + 32;
	cout << PI << endl;
	cout << ch1 << endl;
	cout << ch2 << endl;
}
*/

// 기초문제 5
/*
int main() {
	int x, y, sum, mult;
	float div;
	cin >> x >> y;
	sum = x + y;
	mult = x * y;
	div = float(x) / y;
	cout << x << '\t' << y << endl;
	cout << "x + y = " << sum << endl;
	cout << "x * y = " << mult << endl;
	cout << "x / y = " << div << endl;
}
*/

// 응용문제 1
/*
int main() {
	cout << "My name is 강동규" << endl;
}
*/

// 응용문제 2
/*
int main() {
	int A, B, sum, min, mult, mod;
	float div;
	cin >> A >> B;
	sum = A + B;
	min = A - B;
	mult = A * B;
	div = float(A) / B;
	mod = A % B;
	cout << "A + B = " << sum << endl;
	cout << "A - B = " << min << endl;
	cout << "A * B = " << mult << endl;
	cout << "A / B = " << div << endl;
	cout << "A % B = " << mod << endl;
}
*/

// 응용문제 3
/*
int main() {
	int i1 = 2, i2 = 5, i3 = -3;
	double d1 = 2.0, d2 = 5.0, d3 = -0.5;
	cout << i1 + (i2 * i3) << endl;
	cout << i1 * (i2 + i3) << endl;
	cout << i1 / (i2 + i3) << endl;
	cout << i1 / i2 + i3 << endl;
	cout << 3 + 4 + 5 / 3 << endl;
	cout << (3 + 4 + 5) / 3 << endl;
	cout << d1 + (d2 * d3) << endl;
	cout << d1 + d2 * d3 << endl;
	cout << d1 / d2 - d3 << endl;
	cout << d1 / (d2 - d3) << endl;
	cout << d1 + d2 + d3 / 3 << endl;
	cout << (d1 + d2 + d3) / 3 << endl;
}
*/

// 응용문제 4
/*
int main() {
	int A, B;
	cout << "A : ";
	cin >> A;
	cout << "B : ";
	cin >> B;
	cout << "value of A is : " << B << endl;
	cout << "value of B is : " << A;
}
*/

// 응용문제 5
/*
int main() {
	int F, C;
	cout << "Please enter Fahrenheit value : ";
	cin >> F;
	C = 5 / 9 * (F - 32);
	cout << "Celsius value is " << C << endl;
}
*/