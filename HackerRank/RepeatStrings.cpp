#include <string>
#include<iostream>
#include <algorithm>
using namespace std;

long repeatedString(string s, long n) {
	long count = n / s.length();
	int rem = n % s.length();
	
	string s1 = "";
	size_t occur1 = 0;
	if (rem > 0)
	{
		if (rem == 1)
		{
			if (s1.compare("a"))
				occur1 = 1;
		}
		else
		{
			s1 = s.substr(0, rem);
			occur1 = std::count(s1.begin(), s1.end(), 'a');
		}

	}
	size_t occur = std::count(s.begin(), s.end(), 'a');
	
	return count*occur + occur1;
}
int main()
{
	string a = "aba";
	long n = 10;
	long result = repeatedString(a,n);
	cout << result;
	//0 0 0 1 0 0


	return 0;
}