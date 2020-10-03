#include <iostream>
#include <iomanip>
using namespace std;


/* 기초문제 1
int main() {
	char grade = 'X';
	int score;
	cout << "Enter your score: ";
	cin >> score;

	if (score >= 0 && score <= 100) {
		if (score >= 90 && score <= 100) {
			grade = 'A';
		}
		else if (score >= 80 && score < 90) {
			grade = 'B';
		}
		else if (score >= 70 && score < 80) {
			grade = 'C';
		}
		else if (score >= 60 && score < 70) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		cout << "Your grade is " << grade << endl;
	}
	else {
		cout << "The score (" << score << ") is invalid" << endl;
	}

	return 0;
}
*/

/* 기본문제 2
int main() {
	int num = 1;
	int count = 1;
	cout.imbue(locale(""));
	while (count <= 20) {
		num *= 2;
		cout << count << '\t' << setw(10) << num << endl;
		count += 1;
	}
	return 0;
}
*/


/* 기본문제 3
int main()
{
	int column = 1, row = 1;
	while (column <= 10){
		while (row <= 10){
			int num;
			if (row == column) {
				num = true;
			}
			else {
				num = false;
			}
			cout << setw(4) << num;
			row++;
		}
		cout << endl;
		column++;
		row = 1;
	}
	return 0;
}
*/


/* 기본문제 4-1
int main() {
	int num;

	while (true) {
		cout << "Enter the number (0, 10]: ";
		cin >> num;
		if (num > 0 && num <= 10) {
			break;
		}
		else {
			continue;
		}
	}
	cout << "Success!" << endl;
	return 0;
}
*/

/* 기본문제 4-2
int main() {
	int num;
	do {
		cout << "Enter the number (0, 10]: ";
		cin >> num;
	} while (!(num > 0 && num <= 10));
	cout << "Success!" << endl;
	return 0;
}
*/

/* 기본문제 5
int main() {
	int n, m;
	cout << "Enter n for n x m matrix: ";
	cin >> n;
	cout << "Enter m for n x m matrix: ";
	cin >> m;

	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <= m; col++) {
			int val = row * col;
			cout << setw(4) << val;
		}
		cout << endl;
	}
	return 0;
}
*/


/* 기본문제 6
int main() {
	char key;
	cout << "Enter a key (p or q): ";
	cin >> key;
	switch (key) {
	case 'P':
	case 'p':
		cout << "Pause" << endl;
		break;
	case 'Q':
	case 'q':
		cout << "Quit" << endl;
		break;
	default:
		cout << "Default" << endl;
	}
}
*/

/* 응용문제 1
int main() {
	int num;
	for (int i = 1; i <= 5; i++) {
		cout << i << "번째 정수 : ";
		cin >> num;
		if ((num % 2) == 0) {
			cout << num << "은(는) 짝수입니다." << endl;
		}
		else {
			cout << num << "은(는) 홀수입니다." << endl;
		}
	}
	return 0;
}
*/


/* 응용문제2
int main() {
	int num, val=0;
	cout << "number : ";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		val += i;
	}
	cout << "Sum of 1 to " << num << " = " << val;
	return 0;
}
*/

/* 응용문제3
int main() {
	int num, val=0;
	cout << "number : ";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		if (i % 2 == 0 || i % 3 == 0) {
			continue;
		}
		else {
			val += i;
		}
	}
	cout << "sum : " << val;
	return 0;
}
*/


/* 응용문제 4
int main() {
	int num;
	while (true) {
		cout << "단 수를 입력하세요: ";
		cin >> num;
		if (num >= 1 && num <= 9) {
			for (int i = 1; i <= 9; i++) {
				cout << num << '*' << i << " = " << num * i << endl;
			}
			cout << endl;
		}
		else if (num == -1) {
			cout << "종료합니다." << endl;
			break;
		}
		else {
			cout << "1 부터 9까지의 정수를 입력해주세요." << endl;
			cout << endl;
		}
	}
}
*/


/* 응용문제 5
int gcd(int x, int y);

int main() {
	int a, b, val;
	cout << "x = ";
	cin >> a;
	cout << "y = ";
	cin >> b;
	if (a < b) {
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	val = gcd(a, b);
	cout << "gcd(" << a << ',' << b << ") = " << val;
}

int gcd(int x, int y) {
	if (x % y == 0) {
		return y;
	}
	else {
		return gcd(y, x % y);
	}
}
*/