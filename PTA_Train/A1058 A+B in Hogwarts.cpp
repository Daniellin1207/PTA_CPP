#include "pch.h"
#include <cstdio>
//const int Knut = 1;
const int Sickle = 29;
const int Galleon = 17 * 29;

//int main1058a() {
//	int a, b, c, x, y, z;
//	int v1, v2, v3;
//	scanf("%d.%d.%d %d.%d.%d", &a, &b, &c, &x, &y, &z);
//	v1 = a * Galleon + b * Sickle + c;
//	v2 = x * Galleon + y * Sickle + z;
//	v3 = v1 + v2;
//	printf("%d.%d.%d", v3 / Galleon, v3%Galleon / Sickle, v3%Sickle);
//	return 0;
//}

int main1058a() {
	int c[3],temp;
	int a[3], b[3];
	scanf("%d.%d.%d %d.%d.%d", &a[0], &a[1], &a[2], &b[0], &b[1], &b[2]);
	c[2] = (a[2] + b[2]) % 29;
	temp = (a[2] + b[2]) / 29;
	c[1] = (a[1] + b[1] + temp) % 17;
	temp= (a[1] + b[1] + temp) / 17;
	c[0]= a[0] + b[0] + temp;
	printf("%d.%d.%d", c[0], c[1], c[2]);
	return 0;
}