#include "pch.h"
//#include <cstdio>
//#include <cstring>
//#include <cmath>
//#include <iostream>
//using namespace std;

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
//int main1013() {
//	int n, m,count=0,i=2;
//	bool firstFlag = true;
//	scanf("%d%d", &n, &m);
//	while (count < m) {
//		if (isPrime(i)) {
//			count++;
//			if (count >= n) {
//				if (!firstFlag) printf(" ");
//				printf("%d", i);
//				if ((count-n+1) % 10 == 0) {
//					firstFlag = true;
//					printf("\n");
//				}
//				else firstFlag = false;
//			}
//		}
//		i++;
//	}
//	return 0;
//}