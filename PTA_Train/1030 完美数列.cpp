#include "pch.h"
#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 100010;
int n, p, a[maxn];

int binarySearch(int i, long long x) {
	if (a[n - 1] <= x) return n;
	int l = i + 1, r = n - 1, mid;
	while (l < r) {
		mid = (l + r) / 2;
		if (a[mid] <= x) l = mid + 1;
		else r = mid;
	}
	return l;
}

int main() {
	scanf("%d%d", &n, &p);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	int ans = 1;
	for (int i = 0; i < n; i++)
	{
		int j = binarySearch(i,(long long)a[i] * p);
		ans = max(ans, j - i);
	}
	printf("%d", ans);
	return 0;
}


//bool cmp(int a, int b) {
//	return a < b;
//}
//
//int main() {
//	int n, p;
//	int a[100010];
//	int count, maxN = 0;
//	scanf("%d%d", &n, &p);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	sort(a, a + n,cmp);
//	for (int i = 0; i < n; i++)
//	{
//		count = 1;
//		for (int j = i+1; j < n; j++)
//		{
//			if (a[i] * p >= a[j]) {
//				count++;
//			}
//		}
//		maxN = maxN > count ? maxN : count;
//	}
//	printf("%d", maxN);
//	return 0;
//}