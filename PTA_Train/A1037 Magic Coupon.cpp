#include "pch.h"
#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 100010;

bool cmpB2S(int a, int b) {
	return a > b;
}

bool cmpS2B(int a, int b) {
	return a < b;
}

int main1037a() {
	int n, m;
	int coupon[maxn], product[maxn];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &coupon[i]);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &product[i]);
	}
	sort(coupon, coupon + n, cmpB2S);
	sort(product, product + m, cmpB2S);
	int ans = 0;
	int i = 0;
	while (coupon[i] > 0 && product[i] > 0 && i < m && i < n) {
		ans += coupon[i] * product[i];
		i++;
	}
	i = n-1;
	while (coupon[i] < 0 && product[i - n + m] < 0 && i>0) {
		ans += coupon[i] * product[i - n + m];
		i--;
	}
	printf("%d", ans);
	return 0;
}