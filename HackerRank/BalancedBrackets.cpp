#include <iostream>
#include <string>
#include<stack>
#include<map>
using namespace std;

string isBalanced(string s) {
	stack<char> elements;
	map<char, char> brackets = { {'}','{'} ,{']','[' },{')','('} };
	for (char c : s)
	{
		if (c == '{' || c == '[' || c == '(')
			elements.push(c);
		else if (c == '}' || c == ']' || c == ')')
		{
			if (!elements.empty())
			{
				if (elements.top() == brackets[c])
					elements.pop();
				else
					return "NO";
			}
			else
				return "NO";
		}
		else
			return "NO";

	}
	if (elements.empty())
		return "YES";
	else
		return "NO";
	
}

int main()
{
	
	
	
	string s = "{[(11)]}";
	string result = isBalanced( s);
	cout << result;

	 s = "{[(1)]}";
	 result = isBalanced(s);
	cout << result;

	 s = "{{[[(())]]}}";
	 result = isBalanced(s);
	cout << result;


	return 0;
}