#include <string>
#include<iostream>
#include <vector>
#include<algorithm>
#include<map>
using namespace std;

int pairs(int k, vector<int> arr) {

	int length = arr.size();;
	int sum = 0;
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (std::abs(arr[i] - arr[j]) == k)
				sum++;
		}
	}
	return sum;

	
}
int main()
{

	vector<int> arr = { 1, 5, 3, 4, 2 };

	int d = 2;
	int result=pairs( d,arr);
	cout << result;
	return 0;
}