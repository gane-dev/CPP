#include <string>
#include<iostream>
#include <algorithm>
#include<map>
#include<vector>
using namespace std;
// Complete the checkMagazine function below.
void checkMagazine(vector<string> magazine, vector<string> note) {

	map<string, int> magmap;
	map<string, int> notemap;
	for (string elem : magazine)
	{
		if (magmap.find(elem) == magmap.end())
			magmap.emplace(elem, 1);
		else
			magmap[elem]++;
	}
	for (string elem : note)
	{
		if (notemap.find(elem) == notemap.end())
			notemap.emplace(elem, 1);
		else
			notemap[elem]++;
	}
	map<string, int>::iterator note_iter = notemap.begin(); 
	while (note_iter != notemap.end())
	{
		if (magmap.find(note_iter->first) == magmap.end())
		{
			cout << "No";
			return;
		}
		else if (magmap[note_iter->first] < note_iter->second)
		{
			cout << "No";
			return;
		}
		note_iter++;
	}
	cout << "Yes";
}

int main()
{

	vector<string> magazine = { "give", "me","one" ,"grand","today","night" };
	vector<string> note = { "give","one" ,"grand","today" };
	checkMagazine(magazine,note);
	


	return 0;
}