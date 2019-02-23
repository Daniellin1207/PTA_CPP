#include "pch.h"
#include <cstdio>
#include <cstring>
#include <map>
#include <iostream>
//using namespace std;
//
//int main1005() {
//	int num[110];
//	int hash[1010] = { 0 };
//	for (int i = 0; i < 1010; i++)
//	{
//		hash[i] = 2;
//	}
//
//	int k;
//	scanf("%d", &k);
//	
//	for (int i = 0; i < k; i++)
//	{
//		scanf("%d", &num[i]);
//		hash[num[i]] = 0;
//	}
//	for (int i = 0; i < k; i++)
//	{
//		while (num[i] != 1) {
//			if(num[i]<=1000) hash[num[i]]++;
//			if (num[i] % 2 == 1) num[i] = (3 * num[i] + 1)/2;
//			else num[i] = num[i] / 2;
//		}
//	}
//	bool sign = true;
//	for (int i = 1000; i >= 0; i--)
//	{
//		if (hash[i] == 1) {
//			if (sign==false) printf(" ");
//			printf("%d", i);
//			sign = false;
//		}
//	}
//	return 0;
//}