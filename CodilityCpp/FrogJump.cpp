#include<vector>
#include<map>
using namespace std;
class FrogJump
{
public:
	int solution(vector<int>a, int x)
	{
		int result = -1;
		int pos = -1;
		map<int, bool> hits;
		for (int elem : a)
		{
			pos++;
			if (hits.find(elem) == hits.end())
			{
				hits.try_emplace(elem, true);
			}
			if (hits.size() == x)
			{
			result = pos;
			break;
		}

		}
		return result;
	}
};