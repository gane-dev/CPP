#include <string>
#include<iostream>
#include <vector>
using namespace std;

int hourglassSum(vector<vector<int>> arr) {
	int max = -9999999;
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int top = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
			int middle = arr[i + 1][j+1];
			int bottom = arr[i+2][j] + arr[i+2][j + 1] + arr[i+2][j + 2];
			sum = top + middle + bottom;
			if (sum > max) {
				max = sum;
			}
		}
	}
	return max;
}
int main()
{
	/*vector<vector<int>> arr = {
		{1, 1, 1, 0, 0, 0}
		,{0, 1, 0, 0, 0, 0}
		,{1, 1, 1, 0, 0, 0}
		,{0, 0, 2, 4, 4, 0}
		,{0, 0, 0, 2, 0, 0}
		,{0, 0, 1, 2, 4, 0}
	};*/
	vector<vector<int>> arr = {
		{0, - 4, - 6, 0, - 7, - 6}
		,{-1, - 2, - 6, - 8, - 3, - 1}
		,{-8, - 4, - 2, - 8, - 8, - 6}
		,{-3, - 1, - 2, - 5, - 7, - 4}
		,{-3, - 5, - 3, - 6, - 6, - 6}
		,{-3, - 6, 0 ,- 8, - 6, - 7}
	};
	
	int result = hourglassSum(arr);
	cout << result;
	//0 0 0 1 0 0


	return 0;
}