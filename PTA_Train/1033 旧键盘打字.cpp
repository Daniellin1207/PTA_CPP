#include "pch.h"
//#include <cstdio>
//#include <cstring>
//#include <iostream>
//using namespace std;

//const int maxn = 100010;
//bool hashTable[256];
//char str[maxn];
//
//int main1033() {
//	memset(hashTable, true, sizeof(hashTable));
//	cin.getline(str,maxn);
//	int len = strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i]>='A' && str[i]<='Z')
//		{
//			str[i] = str[i] - 'A' + 'a';
//		}
//		hashTable[str[i]] = false;
//	}
//	cin.getline(str, maxn);
//	len = strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i]>='A' && str[i]<='Z')
//		{
//			int low = str[i] - 'A' + 'a';
//			if (hashTable[low] == true && hashTable['+'] == true) printf("%c", str[i]);
//		}
//		else if (hashTable[str[i]]==true)
//		{
//			printf("%c", str[i]);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//int main1033() {
//	char broken[200];
//	char str[100010];
//	cin.getline(broken, 200);
//	cin.getline(str, 100010);
//	int len = strlen(str);
//	int lenBroken=strlen(broken);
//	bool signPlus = true;
//	for (int i = 0; i < lenBroken; i++)
//	{
//		if (broken[i] == '+') {
//			signPlus = false;
//			break;
//		}
//	}
//	for (int i = 0; i < len; i++)
//	{
//		char c2,c1 = str[i];
//		if (str[i] >= 'A' && str[i] <= 'Z') {
//			if (signPlus) printf("%c", c1);
//			else continue;
//			c1 += 32;
//		}
//		int j;
//		for (j=0; j < lenBroken; j++)
//		{
//			c2 = broken[j];
//			if (c2 >= 'A' && c2 < 'Z') c2 += 32;
//			if (c1 == c2) break;
//			else continue;
//		}
//		if (j == lenBroken) printf("%c", str[i]);
//	}
//}