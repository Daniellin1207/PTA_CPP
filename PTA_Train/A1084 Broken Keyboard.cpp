#include "pch.h"
#include <cstdio>
#include <cstring>
#include <iostream>
//using namespace std;
//
//int main1084a() {
//	char str1[100];
//	char str2[100];
//	bool hash[128] = { false };
//	cin.getline(str1, 100);
//	cin.getline(str2, 100);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	for (int i = 0; i < len1; i++)
//	{
//		char c1 = str1[i];
//		char c2;
//		int j = 0;
//		if (c1 >= 'a' && c1 <= 'z') c1 -= 32;
//		for (j = 0; j < len2; j++)
//		{
//			c2 = str2[j];
//			if (c2 >= 'a' && c2 <= 'z') c2 -= 32;
//			if (c1 == c2) break;
//		}
//		if (j == len2 && hash[c1] == false) {
//			printf("%c", c1);
//			hash[c1] = true;
//		}
//	}
//	return 0;
//}