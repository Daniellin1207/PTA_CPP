#include "pch.h"
#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
//using namespace std;
//
//typedef long long ll;
//int main1096a() {
//	ll n;
//	scanf("%lld", &n);
//	ll sqr = (ll)sqrt(1.0*n);
//	int maxlen=0,l;
//	for (int i = 2; i <=sqr; i++)
//	{
//		ll mul = 1;
//		for (int j = i; j <=sqr; j++)
//		{
//			mul *= j;
//			if (n%mul != 0) break;
//			if (j - i + 1 > maxlen) {
//				l = i;
//				maxlen = j - i + 1;
//			}
//		}
//	}
//	if (maxlen == 0) printf("1\n%lld", n);
//	else {
//		printf("%d\n", maxlen);
//		for (int i = 0; i < maxlen; i++)
//		{
//			if (i == 0) printf("%d", l);
//			else printf("*%d", l);
//			l++;
//		}
//	}
//	return 0;
//}