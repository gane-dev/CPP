#include <vector>
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int maxSubsetSum(vector<int> arr) {
	int n = arr.size();
	vector<int> maxupto = {};
	for (int i = 0; i < n; i++)
	{
		int val = arr[i];
		int valorzero = std::max(0, val);
		int max1 = i - 1 >= 0 ? maxupto[i - 1] : 0;
		int max2 = i - 2 >= 0 ? maxupto[i - 2] : 0;

		int temp = max1 + valorzero;
		maxupto.emplace_back(std::max(max1, max2 + valorzero));

	}
	return maxupto[n - 1];
}
int main()
{
	vector<int> a = { 3 ,5, - 7, 8 ,10 };
	int result = maxSubsetSum(a);
	cout << result << endl;
	//0 0 0 1 0 0
	a = { 2, 1, 5, 8, 4 };
	result = maxSubsetSum(a);
	cout << result;
	
	return 0;
}