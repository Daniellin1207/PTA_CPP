#include "pch.h"
#include <cstdio>
#include <string>
#include <map>
#include <iostream>
using namespace std;

bool check(char c) {
	if (c >= '0' && c <= '9') return true;
	if (c >= 'a' && c <= 'z') return true;
	if (c >= 'A' && c <= 'Z') return true;
	return false;
}

int main1071a() {
	map<string, int> count;
	string str;
	getline(cin, str);
	int i = 0;
	while (i < str.length()) {
		string word;
		while (i < str.length() && check(str[i])) {
			if (str[i] >= 'A' && str[i] <= 'Z') {
				str[i] += 32;
			}
			word += str[i];
			i++;
		}
		if (word != "") {
			if (count.find(word) != count.end()) count[word]++;
			else count[word] = 1;
		}
		while (i < str.length() && check(str[i]) == false) {
			i++;
		}
	}
	string ans;
	int MAX = 0;
	for (map<string, int>::iterator it = count.begin(); it != count.end(); it++) {
		if (it->second > MAX) {
			MAX = it->second;
			ans=it->first;
		}
	}
	cout << ans << " " << MAX << endl;
	return 0;
}