#include <iostream>
#include <string>
#include <iomanip> 
#include <cmath>
#include <utility>
#include <sstream>
#include <ctype.h>
#include <list>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

bool compareStrings(const string &str1, const string &str2)
{
	return str1 < str2;
}
bool compareStringLengths(const string &str1, const string &str2)
{
	return str1.length() < str2.length();
}

int main()
{
	string line;
	getline(cin, line);
	istringstream iss(line);
	vector<string> vStrings;
	string word;

	while (iss >> word)		
		vStrings.push_back(word);

	bool(*ptrCompare) (const string &, const string &) = compareStrings;
	bool(*ptrCompareLengths) (const string &, const string &) = compareStringLengths;
	size_t number;
	cin >> number;

	switch (number)
	{
	case 1 : sort(vStrings.begin(), vStrings.end(), ptrCompare);
		cout << vStrings[0] << endl;
		break;
	case 2: cout << *min_element(vStrings.begin(), vStrings.end(), ptrCompareLengths) << endl;		
		break;
	case 3: cout << *max_element(vStrings.begin(), vStrings.end(), ptrCompareLengths) << endl;
		break;
	}

	return 0;
}

