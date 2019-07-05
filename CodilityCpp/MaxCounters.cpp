#include<vector>
#include<algorithm>
using namespace std;

class MaxCounters
{
public:
	vector<int> solution(vector<int>a, int n)
	{
		int min = 0;
		int max = 0;
		vector<int> counter(n+1,0);
		for (int elem : a)
		{
			if (elem <= n)
			{
				counter[elem]++;
				if (counter[elem] > max)
					max = counter[elem];
			}
			else
			{
				min = max;
				for (int i = 0; i < counter.size(); i++)
				{
					counter[i] = max;
				}
			}
		}
		return counter;
	}
};