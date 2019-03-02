#include "pch.h"
//#include <cstdio>
//#include <cstring>

//const int maxn = 110;
//char A[maxn], B[maxn], ans[maxn] = { 0 };
//
//void reverse(char s[]) {
//	int len = strlen(s);
//	for (int i = 0; i < len/2; i++)
//	{
//		int temp = s[i];
//		s[i] = s[len - i - 1];
//		s[len - i - 1] = temp;
//	}
//}
//
//int main1048() {
//	scanf("%s %s", A, B);
//	reverse(A);
//	reverse(B);
//	int lenA = strlen(A);
//	int lenB = strlen(B);
//	int len = lenA > lenB ? lenA : lenB;
//	for (int i = 0; i < len; i++)
//	{
//		int numA = i < lenA ? A[i] - '0' : 0;
//		int numB = i < lenB ? B[i] - '0' : 0;
//		if (i%2==0)
//		{
//			int temp = (numB + numA) % 13;
//			if (temp == 10) ans[i] = 'J';
//			else if (temp == 11) ans[i] = 'Q';
//			else if (temp == 12) ans[i] = 'K';
//			else ans[i] = temp + '0';
//		}
//		else {
//			int temp = numB - numA;
//			if (temp < 0) temp += 10;
//			ans[i] = temp + '0';
//		}
//	}
//	reverse(ans);
//	puts(ans);
//	return 0;
//}