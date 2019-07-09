#include <iostream>
#include <string>
#include<stack>
using namespace std;

string isBalanced(string s) {
	stack<char> elements;
	for (char c : s)
	{
		if (c == '{' || c == '[' || c == '(')
			elements.push(c);
		else if (c == '}' || c == ']' || c == ')')
		{
			if (elements.top() == '{' || elements.top() == '[' || elements.top() == '(')
				elements.pop();
			else
				return "NO";
		}

	}
	return "YES";
	
}

int main()
{
	
	
	
	string s = "{[()]}";
	string result = isBalanced( s);
	cout << result;

	 s = "{[(])}";
	 result = isBalanced(s);
	cout << result;

	 s = "{{[[(())]]}}";
	 result = isBalanced(s);
	cout << result;


	return 0;
}