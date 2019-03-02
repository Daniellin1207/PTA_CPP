#include "pch.h"
//#include <cstdio>
//#include <cstring>
//#include <map>
//#include <iostream>
//using namespace std;
//
//int main1050a() {
//	char str1[10010];
//	char str2[10010];
//	bool hash[300];
//	memset(hash, true, sizeof(hash));
//	cin.getline(str1, 10010);
//	cin.getline(str2, 10010);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//
//	for (int i = 0; i < len2; i++)
//	{
//		hash[str2[i]] = false;
//	}
//
//	for (int i = 0; i < len1; i++)
//	{
//		if (hash[str1[i]]) printf("%c", str1[i]);
//	}
//	return 0;
//}