#include <vector>
#include<iostream>
using namespace std;

int jumpingOnClouds(vector<int> c) {
	int count = 0;
	for (int i =0;i< c.size();)
	{
		if (i + 2 < c.size() && c[i + 2] != 1)
		{
			i = i + 2;
			count++;
		}
		else if (i+1 < c.size())
			{
				
				count++;
				i++;
			}
		else
			i++;
		}
		
	
	return count;
}
int main()
{
	vector<int> a = { 0, 0, 1, 0, 0, 1, 0 };
	int result = jumpingOnClouds(a);
	cout << result;
	//0 0 0 1 0 0


	return 0;
}