#include <iostream>

using namespace std;

int main() {
	int num, a, b;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		cin >> a >> b;
		cout << a + b << endl;
	}

	return 0;
}