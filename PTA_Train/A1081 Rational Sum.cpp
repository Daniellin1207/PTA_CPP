#include "pch.h"
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}

int main1081a() {
	int n,a[110],b[110],up,down;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d/%d", &a[i], &b[i]);
	}
	up = a[0], down = b[0];
	for (int i = 1; i < n; i++)
	{
		// a[i]/b[i] ºÍ up/down
		int temp1,temp2;
		temp1 = gcd(down, b[i]);
		temp2 = up * b[i] / temp1 + a[i] * down / temp1;
		temp1 = down * b[i] / temp1;
		up = temp2 / gcd(temp1, temp2);
		down = temp1 / gcd(temp1, temp2);
	}
	if (down == 1 || down == -1) printf("%d", up / down);
	else if (up%down==0) printf("%d",up/down);
	else if (up > down) printf("%d %d/%d", up / down, up%down, down);
	else printf("%d/%d", up, down);
	return 0;

}