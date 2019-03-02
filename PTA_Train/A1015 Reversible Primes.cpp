#include "pch.h"
//#include <cstdio>
//#include <cstring>
//#include <cmath>
//#include <iostream>
//using namespace std;

//struct Team {
//	int num;
//	int rad;
//}n[100010];
//
//bool isPrime(int n) {
//	if (n < 2)return false;
//	int sqr = (int)sqrt(n);
//	for (int i = 2; i < sqr+1; i++)
//	{
//		if (n%i == 0) return false;
//	}
//	return true;
//}
//
//int change(int num, int rad) {
//	int temp[111],l=0,i=0;
//	while (num>0) {
//		temp[l++] = num % rad;
//		num /= rad;
//	}
//	while (l > 0) {
//		num += temp[i++] * pow(rad, l - 1);
//		l--;
//	}
//	return num;
//}
//
//// 还需要判断输入的是素数！！！
//int main1015a() {
//	int k = 0;
//	while (true)
//	{
//		scanf("%d", &n[k].num);
//		if (n[k].num > 0) scanf("%d", &n[k].rad);
//		else break;
//		k++;
//	}
//	for (int i = 0; i < k; i++)
//	{
//		if (!isPrime(n[i].num)) {
//			printf("No\n");
//			continue;
//		}
//		n[i].num = change(n[i].num, n[i].rad);
//		if (isPrime(n[i].num)) printf("Yes\n");
//		else printf("No\n");
//	}
//	return 0;
//}