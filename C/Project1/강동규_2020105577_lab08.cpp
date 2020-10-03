#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

/* 기초문제 1
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{
	int a = 10, b = 20;
	cout << a << ", " << b << endl;
	swap(&a, &b);
	cout << a << ", " << b << endl;

	return 0;
}
*/


/* 기초문제 2
int sum(int x, int y) { return x + y; }
int mult(int x, int y) { return x * y; }
int evaluate(int(*func)(int, int), int x, int y)
{
	return func(x, y);
}


int main() {
	int(*func)(int, int);
	func = &sum;
	cout << func(10, 20) << endl;
	func = &mult;
	cout << func(10, 20) << endl;
	cout << evaluate(&sum, 100, 200) << endl;
	cout << evaluate(&mult, 100, 200) << endl;


	return 0;
}
*/


/* 기초문제 3
void print(const vector<int>& v)
{
	for (unsigned i = 0; i < v.size(); i++)
		cout << v[i] << "\t";
	cout << endl;
}

int main()
{
	vector<int> vec{ 10,20,30 };
	print(vec);

	vec[0] = 100;
	vec.at(1) = 200;
	print(vec);

	vec.push_back(400);
	print(vec);

	vec.pop_back();
	print(vec);

	cout << endl;

	for (int& elem : vec)
	{
		cout << "enter an element of vector v: ";
		cin >> elem;
	}

	cout << endl << "[ vector v ]" << endl;
	for (int elem : vec)
	{
		cout << elem << "\t";
	}
	cout << endl;

	return 0;
}
*/


/* 기초문제 4
bool is_prime(int num)
{
	if (num < 2)
		return false;
	for (int i = 2; i < num; i++)
	{
		if(num % i == 0)
		{
			return false;
		}
	}
	return true;
}

vector<int> primes(int lower, int upper)
{
	vector<int> v;
	for (int i = lower; i <= upper; i++)
	{
		if (is_prime(i) == true)
			v.push_back(i);
	}
	return v;
}

int main()
{
	int lower = 10, upper = 100;
	vector<int> vec = primes(lower, upper);
	for (int elem : vec)
	{
		cout << elem << setw(5);
	}
	cout << endl;

	return 0;
}
*/


/* 응용문제 1
void pow(int* x)
{
	*x *= *x;
}

int main() 
{
	int num;
	cout << "input> ";
	cin >> num;
	pow(&num);
	cout << "제곱값> " << num;
	return 0;
}
*/


/* 응용문제 2
void save(string* str)
{
	cout << "input> ";
	cin >> *str;
}

int main()
{
	string str = "This is default value";
	cout << "기본값 출력> " << str << endl;
	save(&str);
	cout << "변환된 값 출력> " << str << endl;
	return 0;
}
*/

/* 응용문제 3
void reverse(vector<int>* vec)
{
	int temp;
	for (unsigned i = 1; i <= vec->size()/2; i++)
	{
		temp = vec->at(10-i);
		vec->at(10-i) = vec->at(i-1);
		vec->at(i-1) = temp;
	}
}

int main()
{
	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
	
	cout << "기본 Vector 값: " << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << setw(3) << vec[i - 1];
	}
	cout << endl;

	reverse(&vec);

	cout << "함수 실행 후 Vector 값: " << endl;
	for (int j = 1; j <= 10; j++)
	{
		cout << setw(3) << vec[j - 1];
	}

	return 0;
}
*/


/* 응용문제 4
int inputGrade(float grade)
{
	cin >> grade;
	if ((grade - (int)grade) != 0.0 || grade < 0 || grade>100)
	{
		cout << "invalid input!!!" << endl;
		exit(EXIT_FAILURE);
	}
	else
		return (int)grade;
}

int* topGrade(const vector<int>& grade)
{
	int result;

	if (grade[0]>=grade[1])
	{
		if(grade[0]>=grade[2])
		{
			result = grade[0];
		}
		else
		{
			result = grade[2];
		}
	}
	else 
	{
		if (grade[1] >= grade[2])
		{
			result = grade[1];
		}
		else
		{
			result = grade[2];
		}
	}
	return &result;
}

int main() 
{
	vector<int> grades;
	float _grade = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "Input " << i << "-th grade(0~100):";
		int grade = inputGrade(_grade);
		grades.push_back(grade);
	}

	int* finalResult = topGrade(grades);
	cout << "Top Grade: " << *finalResult;
	return 0;
}
*/