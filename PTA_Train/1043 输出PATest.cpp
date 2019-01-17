#include "pch.h"
#include <cstdio>
#include <cstring>
#include <map>
#include <iostream>
using namespace std;

int main1043() {
	map<char, int> dic;
	char str[10010];
	char t[10] = "PATest";
	cin.getline(str, 10010);
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (dic.count(str[i]) == 0) dic[str[i]] = 1;
		else dic[str[i]]++;
	}

	len = 0;
	for (int i = 0; i < 6; i++)
	{
		len += dic[t[i]];
	}

	while (len>0)
	{
		for (int i = 0; i < 6; i++)
		{
			if (dic[t[i]] > 0) {
				printf("%c", t[i]);
				dic[t[i]]--;
				len--;
			}
		}
	}
	return 0;
}