#include "pch.h"
#include <cstdio>
#include <map>
#include <cmath>
#include <algorithm>
//using namespace std;
//
//bool isPrime(int n) {
//	if (n < 2)return false;
//	int sqr = (int)sqrt(n);
//	for (int i = 2; i < sqr + 1; i++)
//	{
//		if (n%i == 0) return false;
//	}
//	return true;
//}
//
//int main1059a() {
//	int n,t;
//	scanf("%d", &t);
//	n = t;
//	if (n == 1) {
//		printf("1=1");
//		return 0;
//	}
//	map<int, int> dic;
//	map<int, int>::iterator it;
//	for (int i = 2; i <=n; i++)
//	{
//		if (isPrime(i)) {
//			if (n%i == 0) {
//				if (dic.count(i) == 0) dic[i] = 1;
//				else dic[i]++;
//				n /= i;
//				i--;
//			}
//		}
//	}
//	printf("%d=", t);
//	for (it=dic.begin(); it!=dic.end(); it++)
//	{
//		if (it != dic.begin()) printf("*");
//		if (it->second > 1) printf("%d^%d", it->first, it -> second);
//		else printf("%d", it->first);
//	}
//	return 0;
//}