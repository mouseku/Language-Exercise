#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num, sum;
    string s1;
    cin >> num;
    cin >> s1;
    for (int i = 0; i < num; i++)
    {
        sum += s1[i];
    }
    cout << sum;

    return 0;
}