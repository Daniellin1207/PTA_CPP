#include "pch.h"
#define _CRT_SECURE_NO_DEPRECATE
#include <cstdio>
int main1046() {
	int n, failA = 0, failB = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a1, a2, b1, b2;
		scanf("%d%d%d%d", &a1, &a2, &b1, &b2);
		if (a1+b1==a2 && a1+b1!=b2)
		{
			failB += 1;
		}
		else if (a1+b1!=a2 && a1+b1==b2)
		{
			failA += 1;
		}
	}
	printf("%d %d", failA, failB);
	return 0;
}