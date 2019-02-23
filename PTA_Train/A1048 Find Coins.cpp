#include "pch.h"
#include <cstdio>
#include <cstring>
#include <map>
#include <algorithm>
#include <iostream>
//using namespace std;
//
////方法2:
//const int maxn = 100010;
//int a[maxn];
//int Bin(int left, int right, int key) {
//	int mid;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (a[mid] == key) return mid;
//		else if (a[mid] > key) right = mid-1;
//		else left = mid+1;
//	}
//	return -1;
//}
//
//int main1048a() {
//	int i, n, m;
//	scanf("%d%d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	sort(a, a + n);
//	for (i = 0; i < n; i++)
//	{
//		int pos = Bin(i+1, n-1, m - a[i]);
//		if (pos != -1) {
//			printf("%d %d\n", a[i], a[pos]);
//			break;
//		}
//	}
//	if (i == n) printf("No Solution\n");
//	return 0;
//}
//



//方法1:
//const int N = 1005;
//int hashMap[N];
//
//int main1048a() {
//	int n, m, a;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		++hashMap[a];
//	}
//	for (int i = 0; i < N; i++)
//	{
//		if (hashMap[i] && hashMap[m - i]) {
//			if (i == m - i && hashMap[i] <= 1) {
//				continue;
//			}
//			printf("%d %d\n", i, m - i);
//			return 0;
//		}
//	}
//	printf("No Solution\n");
//	return 0;
//}
//

//int main1048a() {
//	int n, m,temp;
//	int num[100010];
//	int grade[100010] = { 0 };
//	bool flag=false;
//	//memset(grade, 0, sizeof(grade));
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//		grade[num[i]]++;
//	}
//	sort(num, num + 100010);
//	if (grade[(m + 1) / 2] > 1 && m%2==0) flag = true;
//	for (int i = 0; i<n; i++) {
//		if (grade[m - num[i]] > 0) printf("%d %d", num[i], m - num[i]);
//		return 0;
//	}
//	if (flag == true) printf("%d %d", m / 2, m / 2);
//	else printf("No Solution");
//	return 0;
//
//}