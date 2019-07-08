#include <string>
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int getMinimumCost(int k, vector<int> c) {
	int length = c.size();
	int val=0;
	
    std::sort(c.begin(),c.end(),greater<int>());
    for(int i=0;i<c.size();i++)
    {
        val = val + (1+i/k)*c[i];
            
         
	}
	return val;
}
int main()
{
	
	vector<int> arr = { 1, 3, 5, 7, 9};
        
	int d = 3;
	int result = getMinimumCost(d,arr);
		cout << result;
	return 0;
}