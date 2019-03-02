#include "pch.h"
//#include <cstdio>
//#include <cstring>
//#include <map>
//#include <iostream>
//using namespace std;
//
//int value(char c) {
//	return c - '0';
//}
//
//int main1017() {
//	char big[1010];
//	int ansQ[1010];
//	memset(ansQ, -1, 1010); // 非常重要 与第二个测试点有关
//	int n,ansR=0,len;
//	scanf("%s %d", big, &n);
//	len = strlen(big);
//	for (int i = 0; i < len; i++)
//	{
//		int v = value(big[i]);
//		v = ansR * 10 + v;
//		ansQ[i] = v / n;
//		ansR = v % n;
//	}
//	if (ansQ[0] == 0 && ansQ[1]<0) printf("0 %d", ansR);
//	else {
//		int flag = true;
//		for (int i = 0; i < len; i++)
//		{
//			if (ansQ[i] == 0 && flag) continue;
//			else {
//				printf("%d", ansQ[i]);
//				flag = false;
//			}
//		}
//		printf(" %d", ansR);
//	}
//	return 0;
//}