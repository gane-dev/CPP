// CodilityCpp.cpp : Defines the entry point for the application.
//

#include "CodilityCpp.h"
#include "FrogJump.cpp"
using namespace std;

int main()
{
	int x = 5;
	vector<int> a = { 1, 3, 1, 4, 2, 3, 5, 4 };
	FrogJump js;
	int result = js.solution(a,x);
	cout << result;
	return 0;
}
