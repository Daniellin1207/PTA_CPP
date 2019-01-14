#include "pch.h"
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

//# 本题不可使用int方法原因在于1000位远超int的范围
//int main() {
//	int n;
//	scanf("%d", &n);
//	if (n<0)
//	{
//		n = -n;
//	}
//	if (n == 0) {
//		printf("0:1");
//		return 0;
//	}
//	while (n != 0) {
//		num[n % 10]++;
//		n /= 10;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (num[i] != 0) printf("%d:%d\n", i, num[i]);
//	}
//	return 0;
//}

int main1021() {
	char str[1010];
	cin.getline(str,1010);
	int len = strlen(str);
	int count[10] = { 0 };
	for (int i = 0; i < len; i++)
	{
		count[str[i] - '0']++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (count[i] != 0) {
			printf("%d:%d\n", i, count[i]);
		}
	}
	return 0;
}