#include "pch.h"
#define _CRT_SECURE_NO_DEPRECATE
#include <cstdio>
int main1001() {
	int n=0, step = 0;
	scanf("%d", &n);
	while (n != 1) {
		if (n % 2 == 0) n = n / 2;
		else n = (3 * n + 1) / 2;
		step++;
	}
	printf("%d\n", step);
	return 0;
}