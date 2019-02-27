#include "pch.h"
#include <cstdio>
#include <algorithm>
using namespace std;




//const int maxn = 1000010;
//const int INF = 0x7fffffff;
//int S1[maxn], S2[maxn];
//
//int main1029a() {
//	int n, m;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &S1[i]);
//	}
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &S2[i]);
//	}
//	S1[n] = S2[m] = INF;
//	int medianPos = (n + m - 1) / 2;
//	int i = 0, j = 0, count = 0;
//	while (count < medianPos) {
//		if (S1[i] < S2[j]) i++;
//		else j++;
//		count++;
//	}
//	if (S1[i] < S2[j]) {
//		printf("%d\n", S1[i]);
//	}
//	else {
//		printf("%d\n", S2[j]);
//	}
//	return 0;
//}

//const int maxn = 1000010;
//int num[maxn];
//int main() {
//	int n, m, i;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	scanf("%d", &m);
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &num[n + i]);
//	}
//	sort(num, num + m + n);
//	printf("%d", num[(int)(m + n-1) / 2]);
//	return 0;
//}