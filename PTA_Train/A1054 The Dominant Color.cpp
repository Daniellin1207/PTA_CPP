#include "pch.h"
//#include <cstdio>
//#include <map>
//using namespace std;
//
//int main() {
//	int width, height,v;
//	scanf("%d%d", &width, &height);
//	map<int, int> data;
//	map<int, int>::iterator it;
//
//	for (int i = 0; i < height; i++)
//	{
//		for (int j = 0; j < width; j++)
//		{
//			scanf("%d", &v);
//			if (data.find(v) != data.end()) data[v]++;
//			else data[v] = 1;
//		}
//	}
//	int k = 0, MAX = 0;
//	for (it=data.begin();it!=data.end();it++)
//	{
//		if (it->second > MAX) {
//			k = it->first;
//			MAX = it->second;
//		}
//	}
//	printf("%d\n", k);
//	return 0;
//}