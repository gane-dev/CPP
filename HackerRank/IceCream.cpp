#include <string>
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

void whatFlavors(vector<int> cost, int money) {

	int length = cost.size();;
	int sum = 0;
	for (int i = 1; i < length; i++)
	{
		for (int j = i + 1; j <= length; j++)
		{
			if (cost[i] + cost[j] == money)
			{
				cout << i << " " << j;
				return;
			}

		}

	}
}
int main()
{

	vector<int> arr = {0, 1, 4, 5, 3, 2 };
		
	int d = 4;
	whatFlavors(arr,d );

	return 0;
}