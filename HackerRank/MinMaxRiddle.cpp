#include <vector>
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

vector<long> riddle(vector<long> arr) {
	vector<long> finalresult;
	for (int i = 0; i < arr.size(); i++)
	{
		vector<long> minresult;
		auto it = arr.begin();
		for (; it != arr.end() - i; ++it)
		{
			vector<long> vec;
			vec.assign(it, it + i + 1);
			auto itMin = std::min_element(vec.begin(), vec.end());
			minresult.push_back(*itMin);
		}
			auto itMax = std::max_element(minresult.begin(), minresult.end());
			finalresult.push_back(*itMax);
		
	}
	return finalresult;
	
}
int main()
{
	vector<long> a = { 2, 6, 1, 12 };
	vector<long> result = riddle(a);
	for(int i=0;i< result.size();i++)
		cout << result[i];
	//0 0 0 1 0 0


	return 0;
}