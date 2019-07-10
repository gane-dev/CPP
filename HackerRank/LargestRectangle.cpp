#include <vector>
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

long largestRectangle(vector<int> h) {
	int sum = 0;
	stack<int> s;
	int i = 0;
	long maxArea = 0;
	int index = 0;
	long area = 0;
	while(i < h.size())
	{
		if (s.empty() || h[s.top()] <= h[i])
			s.push(i++);
		else
		{

			 index= s.top();
			s.pop();
			 area = h[index] * (s.empty() ? i :i- s.top() - 1);
			maxArea = std::max(maxArea, area);
		}
	}
		while (s.empty() ==false)
		{
			index = s.top();
			s.pop();
			area = h[index] * (s.empty() ? i : i - s.top() - 1);
			maxArea = std::max(maxArea, area);
		}
		
		
	return maxArea;
}
int main()
{
	vector<int> a = {5,4,3,6,7 };
	int result = largestRectangle(a);
	cout << result;
	//0 0 0 1 0 0


	return 0;
}