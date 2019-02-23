#include "pch.h"
#include <cstdio>
#include <cstring>
#include <map>
#include <iostream>
//using namespace std;
//
//
//int main1042() {
//	map<char, int> dic;
//	map<char, int>::iterator it;
//	char x;
//	int m=0;
//	char str[1010];
//	cin.getline(str, 1010);
//	int len = strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] - 'A' + 'a';
//		if (str[i] >= 'a' && str[i] <= 'z') {
//			if (dic.count(str[i]) == 0) dic[str[i]] = 1;
//			else dic[str[i]]++;
//		}
//	}
//	for (it = dic.begin(); it != dic.end(); it++) {
//		if (it->second > m) {
//			x = it->first;
//			m = it->second;
//		}
//		else if (it->second == m && it->first<x) {
//			x = it->first;
//		}
//	}
//	printf("%c %d", x, m);
//	return 0;
//}