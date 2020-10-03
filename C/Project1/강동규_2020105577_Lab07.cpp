#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

/* 기초문제 1 
int main() {
	string s1 = "mouse";
	cout << s1 << endl;
	cout << s1.length() << ", " << s1.size() << endl << endl;

	cout << s1.empty() << endl;
	s1.clear();
	cout << s1.empty() << endl;

	s1 = "Good";
	s1 = s1 + "-bye";
	cout << s1 << endl;
	cout << s1.at(4) << ", " << s1[4] << endl; //at->안정성, []->속도
	cout << (s1 == "Good-bye") << endl;
	cout << (s1 == "good-bye") << endl;
	cout << (s1 >= "z") << endl << endl;


	cout << s1.substr(5, 3) << endl;
	cout << s1.substr(2, 2) << endl;
	cout << s1.find("od") << endl;
	cout << s1.find("od", 5) << endl;
	int od_index = s1.find("od");
	cout << s1.find("od", od_index + 2) << endl;
	cout << (s1.find("korea") == string::npos) << endl;


	return 0;
}
*/


/* 기초문제 2
int main() {
	ofstream fout;
	fout.open("example.txt");

	string s2 = "Objective Oriented Programming";
	fout << s2 << endl;
	fout << "Random Variables" << endl;
	fout << "Linear Algebra" << endl;

	fout.close();

	ifstream fin;
	string s1;
	fin.open("example.txt");
	if (!fin) {
		cout << "Error, no such file exists" << endl;
		exit(100);
	}

	while (getline(fin, s1)) {
		cout << s1 << endl;
	}

//	while (1) {
//		fin >> s1;
//		if (fin.eof()) {
//			exit(100);
//		}
//		cout << s1 << endl;
//	}

	fin.close();
}
*/


/* 기초문제3
int main() {
	double d1 = 1.23456789;

	cout << d1 << endl;
	cout.width(10);
	cout.precision(3);
	cout << d1 << endl;

	char ch1;
	char ch2;

	cin >> ch1;
	cout << "(" << ch1 << ")" << endl;

	cin.ignore();

	cin.unsetf(ios::skipws);
	cin >> ch2;
	cout << "(" << ch2 << ")" << endl;

	return 0;
}
*/




/* 기초문제4
bool getStu(ifstream& fin, int& id, int& exam1, int& exam2, int& exam3) {
	fin >> id >> exam1 >> exam2 >> exam3;
	if (!fin)
		return false;
	return true;
}

void calcGrade(int exam1, int exam2, int exam3, int& avg, char& grade) {
	avg = (exam1 + exam2 + exam3) / 3;
	if (avg >= 90)
		grade = 'A';
	else if (avg >= 80)
		grade = 'B';
	else
		grade = 'F';
}

void writeStu(ofstream& fout, int id, int avg, char grade) {
	fout.fill('0');
	fout << setw(4) << id;
	fout.fill(' ');
	fout << setw(4) << avg;
	fout << setw(4) << grade << endl;
}


int main() {

	ifstream fin("ch7STUFL.DAT");
	ofstream fout("grade.txt");
	int id, exam1, exam2, exam3, avg;
	char grade;

	while (getStu(fin, id, exam1, exam2, exam3)) {
		calcGrade(exam1, exam2, exam3, avg, grade);
		writeStu(fout, id, avg, grade);
	}
		

	fin.close();
	fout.close();

	cout << "end";
	
	return 0;
}
*/


/* 응용문제 1
int main() {
	string city, area, street, building;
	cout << "시 : ";
	cin >> city;
	cout << "구 : ";
	cin >> area;
	cout << "로 : ";
	cin >> street;
	cout << "건물명 : ";
	cin >> building;

	cout << "집주소 : " << city << area << street << building;
	return 0;
}
*/


/* 응용문제 2
int main() {
	string data = "사랑,프로그래밍,의자,사랑의바보,영통역,천년의사랑,냉장고,객체지향";
	string keyword, result;
	int keyIndex = 0, commaIndex = 0, wordIndex = 0;

	cout << "키워드 : ";
	cin >> keyword;
	cout << endl;
	cout << "검색결과 : ";


	while (true)
	{
		wordIndex = data.find(keyword, wordIndex);
		commaIndex = data.find(",", commaIndex);
		keyIndex = wordIndex;

		if (keyIndex == -1)
		{
			break;
		}
		else
		{
			if (keyIndex != 0)
			{
				if (!(data[keyIndex - 1] == ','))
				{
					while (!(data[keyIndex - 1] == ','))
					{
						keyIndex--;
					}
				}
				if (commaIndex < keyIndex)
				{
					commaIndex = data.find(',', keyIndex);
				}
				if (commaIndex == -1)
				{
					commaIndex = data.length();
				}
			}
		}
		result = data.substr(keyIndex, commaIndex - keyIndex) + " ";
		cout << result;
		wordIndex++;
		commaIndex++;
	}
	
	return 0;
}
*/


/* 응용문제 3
int main() {
	int col = 1, row = 1;

	for (int col = 1; col <= 10; col++)
	{
		for (int row = 1; row <= 10; row++)
		{
			int num = rand()%101;
			cout << setw(4) << num;
		}
		cout << endl;
	}

	return 0;
}
*/


/* 응용문제4
int main() {
	ofstream fout;
	ifstream fin;
	string s1;
	
	fin.open("lab7text1.txt");
	fout.open("lab7text.txt");

	while (getline(fin, s1))
	{
		fout << s1 << endl;
	}

	fin.close();

	fout << endl;

	fin.open("lab7text2.txt");

	while (getline(fin, s1))
	{
		fout << s1 << endl;
	}

	fin.close();
	fout.close();

	return 0;
}
*/


/* 응용문제 5
int main() {
	ifstream fin("lab7app05before.txt");
	ofstream fout("lab7app05after.txt");
	int len, size = 0;
	char ch1;
	
	cout << "length = ";
	cin >> len;

	while (true)
	{
		fin.get(ch1);
	
		if (int(ch1) == 10)
		{
			ch1 = NULL;
		}
		else 
		{
			size++;
			fout.put(ch1);
			if (size == len)
			{
				fout << "\n";
				size = 0;
			}
			if (fin.eof())
			{
				break;
			}
		}
		
	}


	return 0;
}
*/