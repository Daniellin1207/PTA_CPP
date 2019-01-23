#include "pch.h"
#include <cstdio>
#include <string>
#include <map>
#include <iostream>
using namespace std;

int main1054a() {
	int width, height;
	int temp;

	map<int, int> dic;
	map<int, int>::iterator it;

	scanf("%d%d", &width, &height);
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			scanf("%d", &temp);
			if (dic.find(temp)!=dic.end()) dic[temp]++;
			else dic[temp]=1;
		}
	}
	int k=0, v=0;
	for (it=dic.begin();it!=dic.end();it++)
	{
		if (it->second > v) {
			k=it->first;
			v = it->second;
		}
	}
	printf("%d",k);
	return 0;
}