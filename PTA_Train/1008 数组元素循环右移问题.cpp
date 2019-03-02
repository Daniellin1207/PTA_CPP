#include "pch.h"
//#include <cstdio>

// 方法2
//int gcd(int a, int b) {
//	if (b == 0) return a;
//	else return gcd(b, a%b);
//}
//
//int main1008() {
//	int a[110];
//	int n, m, temp, pos, next;
//	scanf("%d%d", &n,&m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	m = m % n;
//	if (m != 0) {
//		int d = gcd(m, n);
//		for (int i = n-m; i < n-m+d; i++)
//		{
//			temp = a[i];
//			pos = i;
//			do {
//				next = (pos - m + n) % n;
//				if (next != i) a[pos] = a[next];
//				else a[pos] = temp;
//				pos = next;
//			} while (pos != i);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d", a[i]);
//		if (i < n - 1) printf(" ");
//	}
//	return 0;
//}


// 方法1
//int main1008() {
//	int a[110];
//	int n, m, count = 0;
//	scanf("%d%d", &n, &m);
//	m = m % n;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = n - m; i < n; i++) {
//		printf("%d", a[i]);
//		count++;
//		if (count < n) printf(" ");
//	}
//	for (int i = 0; i < n - m; i++) {
//		printf("%d", a[i]);
//		count++;
//		if (count < n) printf(" ");
//	}
//	return 0;
//}