#include "pch.h"
#include <cstdio>
#include <cstring>
#include <map>
#include <iostream>
using namespace std;


int main1041a() {
	map<int, bool> dic;
	map<int, bool>::iterator it;
	int n;
	int grade[100010];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &grade[i]);
		if (dic.count(grade[i]) == 0) dic[grade[i]] = true;
		else dic[grade[i]] = false;
	}
	for (int i = 0; i < n; i++)
	{
		if (dic[grade[i]] == true) {
			printf("%d", grade[i]);
			return 0;
		}
	}
	printf("None");
	return 0;
}