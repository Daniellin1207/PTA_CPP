#include "pch.h"
#include <cstdio>
#include <map>
#include <cstring>
#include <iostream>
//using namespace std;
//
//
//int main1039() {
//	bool sign=true;
//	int countF = 0;
//
//	char pearl[1010];
//	//char buy[1010];
//	map<char, int> dic;
//	cin.getline(pearl, 1010);
//	int countT = strlen(pearl);
//	for (int i = 0; i < countT; i++)
//	{
//		if (dic.count(pearl[i]) == 0) 
//			dic[pearl[i]] = 1;
//		else dic[pearl[i]]++;
//	}
//	cin.getline(pearl, 1010);
//	int len = strlen(pearl);
//	for (int i = 0; i < len; i++)
//	{
//		if (dic.count(pearl[i]) == 0 || dic[pearl[i]] == 0) {
//			sign = false;
//			countF++;
//		}
//		else if (dic[pearl[i]] > 0) {
//			dic[pearl[i]]--;
//		}
//		//else dic[pearl[i]]--;
//	}
//	if (sign) printf("Yes %d", countT - len);
//	else printf("No %d", countF);
//	return 0;
//}