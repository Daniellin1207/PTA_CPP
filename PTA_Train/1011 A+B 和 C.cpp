#include "pch.h"
#define _CRT_SECURE_NO_DEPRECATE
#include <cstdio>
int main1() {
	int T, tcase = 1;
	scanf("%d", &T);
	while (T--) {
		long long a, b, c;
		scanf("%lld%lld%lld", &a, &b, &c);
		if (a + b > c) {
			printf("Case #%d: true\n", tcase++);
		}
		else {
			printf("Case #%d: false\n", tcase++);
		}
	}
	return 0;
}