#include "pch.h"
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
//using namespace std;
//
//struct MoonCake {
//	float store;
//	float sell;
//	float price;
//}moon[1010];
//
//bool cmp(MoonCake a, MoonCake b) {
//	return a.price > b.price;
//}
//
//int main1020() {
//	int n, m;
//	float allStore = 0, allSell = 0;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%f", &moon[i].store);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%f", &moon[i].sell);
//		moon[i].price = moon[i].sell / moon[i].store;
//	}
//	sort(moon, moon + n, cmp);
//	int i = 0;
//	while (allStore < m) {
//		if (moon[i].store+allStore<m)
//		{
//			allSell += moon[i].sell;
//			allStore += moon[i].store;
//		}
//		else
//		{
//			allSell += moon[i].price*(m - allStore);
//			break;
//		}
//		i++;
//		if (i > n - 1) break;
//	}
//	printf("%.2f", allSell);
//	return 0;
//}