#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

//갱신하는 방식으로


int main() 
{
	string word;
	int alpaIndex = 0, resultCount = 0, saveCount = 0;
	char result=' ';
	cin >> word;

	transform(word.begin(), word.end(), word.begin(), ::toupper);
	resultCount = count(word.begin(), word.end(), word[0]);

	for (int i = 1; i < word.length(); i++)
	{
		int middleCount = 0;
		
		

		if (word[alpaIndex] == word[i])
			continue;
		else
		{
			middleCount = count(word.begin(), word.end(), word[i]);

			if (resultCount < middleCount)
			{
				resultCount = middleCount;
				alpaIndex = i;
			}
			else if (resultCount == middleCount)
			{
				saveCount = middleCount;
			}
		}

	}
	if (resultCount == saveCount)
		result = '?';
	else
	{
		result = word[alpaIndex];
	}
	cout << result;

	return 0;
}