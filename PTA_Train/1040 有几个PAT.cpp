#include "pch.h"
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//const int N = 100010;
//char C[N];
//int leftP[N];
//int main1040() {
//	int count = 0;
//	int ans = 0;
//	cin.getline(C, N);
//	int len = strlen(C);
//	for (int i = 0; i < len; i++)
//	{
//		if (C[i] == 'P') {
//			count++;
//		}
//		leftP[i] = count;
//	}
//	count = 0;
//	for (int i = len - 1; i >= 0; i--) {
//		if (C[i] == 'T') {
//			count++;
//		}
//		else if (C[i] == 'A') {
//			ans = (ans + leftP[i] * count) % 1000000007;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}