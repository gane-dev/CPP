#include <string>
#include<iostream>
#include <vector>
#include<algorithm>
#include<map>
using namespace std;

void whatFlavors(vector<int> cost, int money) {
	map<int, int> creamids;
	int length = cost.size();;
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		int icecream_cost = cost[i];
		int othercost = money - icecream_cost;
		
		if (creamids.find(othercost) != creamids.end())
		{
			cout << creamids[othercost] << " " << i+1 << endl;
			return;
		}
		
		if (creamids.find(icecream_cost) == creamids.end())
			creamids.emplace(icecream_cost, i+1);
		
	}
}
int main()
{

	vector<int> arr = { 1, 4, 5, 3, 2 };
		
	int d = 4;
	whatFlavors(arr,d );

	return 0;
}