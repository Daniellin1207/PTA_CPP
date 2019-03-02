#include "pch.h"
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//const int maxn = 100010;
//int pos[maxn];
//int main1067a() {
//	int n, ans = 0;
//	scanf("%d", &n);
//	int left = n - 1, num;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &num);
//		pos[num] = i;
//		if (num == i && num != 0) {
//			left--;
//		}
//	}
//	int k = 1;
//	while (left > 0) {
//		if (pos[0] == 0) {
//			while (k < n) {
//				if (pos[k] != k) {
//					swap(pos[0], pos[k]);
//					ans++;
//					break;
//				}
//				k++;
//			}
//		}
//		while (pos[0] != 0) {
//			swap(pos[0], pos[pos[0]]);
//			ans++;
//			left--;
//		}
//	}
//	printf("%d\n", ans);
//	return 0;
//}


//void swap(int a, int b) {
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//int main1067a() {
//	int num[100010],rec[100010],n,ans=0;
//	int k;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//		//if (num[i] == 0) k = i;
//		rec[num[i]] = i;
//	}
//	while (true) {
//		swap(num[rec[rec[0]]], num[rec[0]]);
//		rec[0] = rec[rec[0]];
//		ans++;
//		if (rec[0] == 0) break;
//	}
//	printf("%d", ans);
//	return 0;
//}