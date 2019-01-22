#include "pch.h"
#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
using namespace std;

//bool isPrime(int n) {
//	if (n <= 1) return false;
//	int sqr = (int)sqrt(n);
//	for (int i = 2; i <= sqr; i++)
//	{
//		if (n%i == 0) return false;
//	}
//	return true;
//}
//
//int main1007() {
//	int n, count = 0;
//	scanf("%d", &n);
//	for (int i = 3; i+2 <= n; i++)
//	{
//		if (isPrime(i) && isPrime(i + 2)) {
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//
//}