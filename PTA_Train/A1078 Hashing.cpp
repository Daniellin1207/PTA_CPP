#include "pch.h"
#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
using namespace std;

//const int N = 11111;
//
//bool isPrime(int n) {
//	if (n < 2) return false;
//	int sqr = (int)sqrt(n);
//	for (int i = 2; i <= sqr; i++)
//	{
//		if (n%i == 0) return false;
//	}
//	return true;
//}
//bool hashTable[N] = { 0 };
//
//int main1078a() {
//	int n, TSize, a;
//	scanf("%d%d", &TSize, &n);
//	while (!isPrime(TSize)) TSize++;
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		int M = a % TSize;
//		if (hashTable[M] == false) {
//			hashTable[M] = true;
//			if (i == 0) printf("%d", M);
//			else printf(" %d", M);
//		}
//		else
//		{
//			int step;
//			for (step=1; step < TSize; step++)
//			{
//				M = (a + step * step) % TSize;
//				if (!hashTable[M]) {
//					hashTable[M] = true;
//					if (i == 0)printf("%d", M);
//					else printf(" %d", M);
//					break;
//				}
//			}
//			if (step >= TSize) {
//				if (i > 0) printf(" ");
//				printf("-");
//			}
//		}
//	}
//	return 0;
//}