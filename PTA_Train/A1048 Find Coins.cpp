#include "pch.h"
#include <cstdio>
#include <cstring>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

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