#include "pch.h"
#include <cstdio>
#include <cstring>
#include <map>
#include <iostream>
using namespace std;

int main1038() {
	int n,m;
	int grade[100010];
	int query[100010];
	map<int, int> info;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &grade[i]);
		if (info.count(grade[i]) == '0') info[grade[i]] = 1;
		else info[grade[i]]++;
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &query[i]);
		if (info.count(query[i]) == 0) printf("0");
		else printf("%d", info[query[i]]);
		if (i != m - 1)printf(" ");
	}
	return 0;
}