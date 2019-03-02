#include "pch.h"
//#include <cstdio>	
//#include <cstring>
//#include <iostream>
//using namespace std;

//int n, minLen = 256, ans = 0;
//char s[100][256];
//
//int main1077a() {
//	scanf("%d", &n);
//	cin.getline(s[0],256);
//	for (int i = 0; i < n; i++)
//	{
//		cin.getline(s[i], 256);
//		int len = strlen(s[i]);
//		if (len < minLen) minLen = len;
//		for (int j = 0; j < len/2; j++)
//		{
//			char temp = s[i][j];
//			s[i][j] = s[i][len - 1 - j];
//			s[i][len - 1 - j] = temp;
//		}
//	}
//	for (int i = 0; i < minLen; i++)
//	{
//		char c = s[0][i];
//		bool same = true;
//		for (int j = 1; j < n; j++)
//		{
//			if (c!=s[j][i])
//			{
//				same = false;
//				break;
//			}
//		}
//		if (same) ans++;
//		else break;
//	}
//	if (ans)
//	{
//		for (int i = ans-1; i >= 0; i--)
//		{
//			printf("%c", s[0][i]);
//		}
//	}
//	else {
//		printf("nai");
//	}
//	return 0;
//}