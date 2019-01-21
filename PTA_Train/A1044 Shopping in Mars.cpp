#include "pch.h"
#include <cstdio>
#include <algorithm>
using namespace std;

//const int N = 100010;
//int sum[N];
//int n, S, nearS = 100000010;
//int upper_bound(int L, int R, int x) {
//	int left = L, right = R, mid;
//	while (left < right) {
//		mid = (left + right) / 2;
//		if (x < sum[mid]) right = mid;
//		else left = mid + 1;
//	}
//	return left;
//}
//
//int main1044a() {
//	scanf("%d%d", &n, &S);
//	sum[0] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &sum[i]);
//		sum[i] += sum[i - 1];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int j = upper_bound(i, n + 1, sum[i - 1] + S);
//		if (sum[j - 1] - sum[i - 1] == S) {
//			nearS = S;
//			break;
//		}
//		else if (j <= n && sum[j] - sum[i - 1] < nearS) {
//			nearS = sum[j] - sum[i - 1];
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int j = upper_bound(i, n + 1, sum[i - 1] + nearS);
//		if (sum[j-1]-sum[i-1]==nearS)
//		{
//			printf("%d-%d\n", i, j - 1);
//		}
//	}
//	return 0;
//}



//const int maxn = 100010;
//int main1044a(){
//	
//	int n, m, num[maxn] = { 0 };
//	scanf("%d %d", &n, &m);
//	int left = 0, right = n;
//	bool flag = false;
//	int minN = 100000000;
//	int grade[maxn] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	while (left < right || right < n - 1) {
//		int count = 0;
//		for (int i = left; i < right; i++)
//		{
//			count += num[i];
//			if (count < m) continue;
//			else if (count == m) {
//				printf("%d-%d\n", left + 1, i + 1);
//				flag = true;
//			}
//			else {
//				if (abs(count - m) < minN) minN = abs(count - m);
//			}
//			break;
//		}
//		left++;
//	}
//	if(flag) return 0;
//	else {
//		while (left < right || right < n - 1) {
//			int count = 0;
//			for (int i = left; i < right; i++)
//			{
//				count += num[i];
//				if (count < m) continue;
//				else if (count == m) {
//					printf("%d-%d\n", left + 1, i + 1);
//				}
//				break;
//			}
//			left++;
//		}
//	}
//	return 0;
//}