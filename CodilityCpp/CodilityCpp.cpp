// CodilityCpp.cpp : Defines the entry point for the application.
//

#include "CodilityCpp.h"
#include "FrogJump.cpp"
#include "MaxCounters.cpp"
using namespace std;

int main()
{
	//Frog jump river
	/*int x = 5;
	vector<int> a = { 1, 3, 1, 4, 2, 3, 5, 4 };
	FrogJump js;
	int result = js.solution(a,x);*/

	//Max counters
	vector<int> a = { 3, 4, 4, 6, 1,4,4 };
	int x = 5;
	MaxCounters mc;
	vector<int> result = mc.solution(a, x);
	for (int i = 1; i <= x; i++)
		cout << result[i] << endl;
	return 0;
}
