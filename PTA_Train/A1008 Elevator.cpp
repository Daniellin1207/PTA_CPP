#include "pch.h"
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;

int main1008a() {
	int n;
	scanf("%d", &n);
	int sum = 0, num, temp=0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		if (num > temp) sum += 6 * (num - temp);
		else sum += 4 * (temp - num);
		sum += 5;
		temp = num;

	}
	printf("%d", sum);
	return 0;
}