//#include <bits/stdc++.h>
#include <map>
#include <vector>
#include<iostream>
using namespace std;

vector<string> split_string(string);

// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
	
	map<int, int> color;
	for (int elem : ar)
	{
		if (color.find(elem) == color.end())
		{
			color.try_emplace(elem, 1);
		}
		else
		{
			color.at(elem)++;
		}
	}
	std::map<int, int>::iterator it = color.begin();
	int count=0;
	while (it != color.end())
	{
		count += it->second / 2;
		it++;
	}
	return count;
}

int main()
{
/*	ofstream fout(getenv("OUTPUT_PATH"));

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string ar_temp_temp;
	getline(cin, ar_temp_temp);

	vector<string> ar_temp = split_string(ar_temp_temp);

	vector<int> ar(n);

	for (int i = 0; i < n; i++) {
		int ar_item = stoi(ar_temp[i]);

		ar[i] = ar_item;
	}
	*/
	int n = 9;
	vector<int> input = { 10, 20 ,20, 10, 10, 30, 50, 10, 20 };
	int result = sockMerchant(n, input);

	cout << result << "\n";


}

/*vector<string> split_string(string input_string) {
	string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char& x, const char& y) {
		return x == y and x == ' ';
		});

	input_string.erase(new_end, input_string.end());

	while (input_string[input_string.length() - 1] == ' ') {
		input_string.pop_back();
	}

	vector<string> splits;
	char delimiter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delimiter);

	while (pos != string::npos) {
		splits.push_back(input_string.substr(i, pos - i));

		i = pos + 1;
		pos = input_string.find(delimiter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

	return splits;
}*/
