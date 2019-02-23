#include "pch.h"
#include <cstdio>
#include <algorithm>
//using namespace std;
//
//const int N = 1000010;
//int num[N],checkL[N],checkR[N];
//int main1045() {
//	int n;
//	int minR, maxL;
//	bool pFlag = false;
//	bool eFlag = false;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	minR = num[n - 1];
//	maxL = num[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (num[i] > maxL) maxL = num[i];
//		checkL[i] = maxL;
//		if (num[n - 1 - i] < minR) minR = num[n - 1 - i];
//		checkR[n - 1 - i] = minR;
//	}
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (num[i] <= checkR[i] && num[i] >= checkL[i]) {
//			num[count++] = num[i];
//		}
//	}
//	printf("%d\n", count);
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d", num[i]);
//		if (i < count - 1) printf(" ");
//	}
//	if (count == 0) printf("\n");
//	return 0;
//}