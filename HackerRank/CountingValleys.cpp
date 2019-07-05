#include <iostream>
#include <string>
using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

	int up = 0;
	int down = 0;
	int step = 0;
	bool prev = false;
	bool second_prev = false;
	if (n != s.length())
		return 0;
	if (n < 2)
		return 0;

	if (s.length() > 1000000)
		return 0;
	for (char c : s)
	{
		if (c == 'D')
		{
			up--;
			if (!second_prev && prev && up <= 0)
				step++;
			second_prev = prev;
			prev = true;

		}
		else if (c == 'U')
		{
			prev = false;
			up++;
		}
		else
			return 0;

	}
	return step;
}

int main()
{
	int n = 8;
	string s = "UDDDUDUU";
	int result = countingValleys(n, s);
	cout << result;
	return 0;
}