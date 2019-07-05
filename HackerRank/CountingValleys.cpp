#include <iostream>
#include <string>
using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

	
	int step = 0;
	int count = 0;
	int down = 0;
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
			step--;
			down++;

		}
		else if (c == 'U')
		{
			step++;
			down--;
			if (step == 0 && down >= 2)
			{
				count++;
				down = 0;
			}
		}
		else
			return 0;
		
	}
	return count;
}

int main()
{
	int n = 10;
	string s = "UDUUUDUDDD";
	int result = countingValleys(n, s);
	cout << result;
	int n = 8;
	string s = "UDDDUDUU";
	int result = countingValleys(n, s);
	cout << result;
	int n = 12;
	string s = "DDUUDDUDUUUD";
	int result = countingValleys(n, s);
	cout << result;
	
		

	return 0;
}