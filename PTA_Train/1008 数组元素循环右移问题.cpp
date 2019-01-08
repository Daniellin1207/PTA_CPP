#include "pch.h"
#define _CRT_SECURE_NO_DEPRECATE
#include <cstdio>
int main1008() {
	int a[110];
	int n, m, count = 0;
	scanf("%d%d", &n, &m);
	m = m % n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = n - m; i < n; i++) {
		printf("%d", a[i]);
		count++;
		if (count < n) printf(" ");
	}
	for (int i = 0; i < n - m; i++) {
		printf("%d", a[i]);
		count++;
		if (count < n) printf(" ");
	}
	return 0;
}