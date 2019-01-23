#include "pch.h"
#include <cstdio>
#include <cstring>
#include <map>
#include <iostream>
using namespace std;

int change(char c) {
	return c - '0';
}

int main1023a() {
	char num[25];
	int rec[10];
	memset(rec, 0, sizeof(int)*10);
	scanf("%s", num);
	int len = strlen(num);
	// rec nums
	for (int i = 0; i < len; i++)
	{
		int v = change(num[i]);
		rec[v]++;
	}
	int temp=0;
	bool flag = true;

	// double calculate
	for (int i = len-1; i >=0; i--)
	{
		int v = change(num[i]);
		num[i] = (temp + v * 2) % 10 + '0';
		temp = (temp + v * 2) / 10;
	}
	if(temp>0){  // false // ½øÎ»
		flag = false;
		printf("No\n1%s", num);
		return 0;
	}
	else {
		for (int i = 0; i < len; i++)
		{
			int v = change(num[i]);
			rec[v]--;
			if (rec[v] < 0) {
				flag = false;
				break;
			}
		}
		if (flag) {
			printf("Yes\n%s", num);
		}
		else {
			printf("No\n%s", num);
		}
		return 0;
	}
}