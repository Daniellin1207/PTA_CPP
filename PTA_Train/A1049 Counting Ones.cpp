#include "pch.h"
//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//
//// 思路一定需要清晰！！！
//int main1049a() {
//	int n, a = 1, ans = 0;
//	int left, now, right;
//	scanf("%d", &n);
//	while (n / a != 0) {
//		left = n / (a * 10);
//		now = n / a % 10;
//		right = n % a;
//		if (now == 0) ans += left * a;
//		else if (now == 1) ans += left * a + right + 1;
//		else ans += (left + 1)*a;
//		a *= 10;
//	}
//	printf("%d", ans);
//	return 0;
//}


//int to_array(int n, int num[]) {
//	int i=0;
//	while (n > 0) {
//		num[i] = n % 10;
//		n /= 10;
//		i++;
//	}
//	return i;
//}
//
//int main() {
//	int n,num[10],sum=0;
//	scanf("%d", &n);
//	int w = to_array(n, num);
//	num[w] = 0;
//	for (int i = w-1; i >= 0; i--)
//	{
//		if (num[i] > 1) sum += n / pow(10, i + 1) + 1;
//		else sum += n % (int)(pow(10, i))+1;
//	}
//	printf("%d", sum);
//	return 0;
//}