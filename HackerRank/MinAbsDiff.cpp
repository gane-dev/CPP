#include <string>
#include<iostream>
#include <vector>
using namespace std;

int minimumAbsoluteDifference(vector<int> arr) {

	int length = arr.size();
    int mindiff=1000000;
	for (int i = 0; i < length-1; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            int diff =abs(arr[i]-arr[j]);
		    if (diff < mindiff)
                mindiff=diff;
	    }
    }
	return mindiff;
}
int main()
{
	
	vector<int> arr = { 3, -7,0 };
	
	int result = minimumAbsoluteDifference(arr);
		cout << result;


	return 0;
}