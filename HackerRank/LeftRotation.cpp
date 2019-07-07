#include <string>
#include<iostream>
#include <vector>
using namespace std;

vector<int> rotLeft(vector<int> a, int d) {
	int length = a.size();
	int mode = d % length;
	vector<int> result;
	for (int i = 0; i < length; i++)
	{
		result.emplace_back(a[(mode + i) % length]);
	}
	return result;
}
int main()
{
	
	vector<int> arr = { 0, -4, -6, 0, -7 };
	int d = 4;
	vector<int> result = rotLeft(arr,d);
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
	}
	//0 0 0 1 0 0


	return 0;
}