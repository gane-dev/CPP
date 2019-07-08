#include <string>
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int luckBalance(int k, vector<vector<int>> contests) {

	int length = contests.size();;
	int maxluck=0;
    int count=0;
    cout << length<<endl;
    vector<int> importance;
	for (int i = 0; i < length; i++)
	{
        if (contests[i][1] == 0)
            maxluck += contests[i][0];
        else if (contests[i][1] == 1)
        {
            importance.emplace_back(contests[i][0]); 
        }
    }
    std::sort(importance.begin(),importance.end(),greater<int>());
    for(int i=0;i<importance.size();i++)
    {
            if (i < k)
                maxluck =maxluck + importance[i];
            else
            {
                maxluck = maxluck - importance[i];
            }
            
         
	}
	return maxluck;
}
int main()
{
	
	vector<vector<int>> arr = { 
        {5, 1}
,{2, 1}
,{1, 1}
,{8, 1}
,{10, 0}
,{5, 0}};
	int d = 3;
	int result = luckBalance(d,arr);
		cout << result;


	return 0;
}