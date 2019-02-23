#include "pch.h"
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
//using namespace std;
//
//struct bign {
//	int d[1000];
//	int len;
//	bign() {
//		memset(d, 0, sizeof(d));
//		len = 0;
//	}
//};
//bign change(char str[]) {
//	bign a;
//	a.len = strlen(str);
//	for (int i = 0; i < a.len; i++)
//	{
//		a.d[i] = str[a.len - i - 1] - '0';
//	}
//	return a;
//}
//bign add(bign a, bign b) {
//	bign c;
//	int carry = 0;
//	for (int i = 0; i < a.len; i++)
//	{
//		int temp = a.d[i] + b.d[i] + carry;
//		c.d[c.len++] = temp % 10;
//		carry = temp / 10;
//	}
//	if (carry != 0) {
//		c.d[c.len++] = carry;
//	}
//	return c;
//}
//bool Judge(bign a) {
//	for (int i = 0; i <= a.len/2 ; i++)
//	{
//		if (a.d[i] != a.d[a.len - 1 - i]) {
//			return false;
//		}
//	}
//	return true;
//}
//void print(bign a) {
//	for (int i = a.len - 1; i >= 0; i--) {
//		printf("%d", a.d[i]);
//	}
//	printf("\n");
//}
//int main1024a() {
//	char str[1000];
//	int T, k = 0;
//	scanf("%s %d", str, &T);
//	bign a = change(str);
//	while (k < T && Judge(a) == false) {
//		bign b = a;
//		reverse(b.d, b.d + b.len);
//		a = add(a, b);
//		k++;
//	}
//	print(a);
//	printf("%d\n", k);
//	return 0;
//}
//bign multi(bign a, int b) {
//	bign c;
//	int carry = 0;
//	for (int i = 0; i < a.len; i++)
//	{
//		int temp = a.d[i] * b + carry;
//		c.d[c.len++] = temp % 10;
//		carry = temp / 10;
//	}
//	while (carry != 0) {
//		c.d[c.len++] = carry % 10;
//		carry /= 10;
//	}
//	return c;
//}


//int reverse(int n) {
//	int k = 0;
//	while (n > 0) {
//		k = k * 10 + n % 10;
//		n /= 10;
//	}
//	return k;
//}
//
//bool isPalin(int n) {
//	int temp = n, k = 0;
//	while (temp > 0) {
//		k = k * 10 + temp % 10;
//		temp /= 10;
//	}
//	if (k == n) return true;
//	else return false;
//}
//
//int main() {
//	int n, m;
//	int temp;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < m; i++)
//	{
//		if (isPalin(n)) {
//			printf("%d\n%d", n, i);
//			return 0;
//		}
//		n = reverse(n) + n;
//	}
//	printf("%d\n%d", n, m);
//	return 0;
//}
//









//#include <cstdio>
//const int N = 54;
//char mp[5] = { 'S','H','C','D','J' };
//int start[N + 1], end[N + 1], next[N + 1];
//
//int main1024a() {
//	int K;
//	scanf("%d", &K);
//	for (int i = 1; i <= N; i++)
//	{
//		start[i] = i;
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		scanf("%d", &next[i]);
//	}
//	for (int step = 0; step < K; step++)
//	{
//		for (int i = 1; i <= N; i++)
//		{
//			end[next[i]] = start[i];
//		}
//		for (int i = 1; i <= N; i++)
//		{
//			start[i] = end[i];
//		}
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		if (i != 1) printf(" ");
//		start[i]--;
//		printf("%c%d", mp[start[i] / 13], start[i] % 13 + 1);
//	}
//	return 0;
//}