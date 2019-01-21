#include "pch.h"
#include <cstdio>

int main1001a() {
	int a, b, c,temp;
	scanf("%d %d", &a, &b);
	c = a + b;

	if (c < 0) {
		c = -c;
		printf("-");
	}

	if (c < 1000) printf("%d", c);
	else if (c < 1000000) printf("%d,%03d", c / 1000, c % 1000);
	else printf("%d,%03d,%03d", c / 1000000, c % 1000000 / 1000, c % 1000);
	return 0;
}

//#include <stdio.h>
//#include <math.h>
//
//int main1001a() {
//	int a, b, sum, c;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	c = abs(sum);
//	if (c < 1000) printf("%d", sum);
//	else if (c < 1000000) printf("%d,%03d", sum / 1000, c % 1000);
//	else printf("%d,%03d,%03d", sum / 1000000, (c / 1000) % 1000, c % 1000);
//	return 0;
//}