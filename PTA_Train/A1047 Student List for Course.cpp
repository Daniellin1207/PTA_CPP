#include "pch.h"
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
//using namespace std;
//
//const int maxn = 40010;
//const int maxc = 2510;
//char name[maxn][5]; // 将name存储在另一个数组中，由int数组调取
//vector<int> course[maxc];
//bool cmp(int a, int b) {
//	return strcmp(name[a], name[b]) < 0;
//}
//int main1047a() {
//	int n, k, c, courseID;
//	scanf("%d%d", &n, &k);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d", name[i], &c);
//		for (int j = 0; j < c; j++)
//		{
//			scanf("%d", &courseID);
//			course[courseID].push_back(i);
//		}
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		printf("%d %d\n", i, course[i].size());
//		sort(course[i].begin(), course[i].end(), cmp);
//		for (int j = 0; j < course[i].size(); j++)
//		{
//			printf("%s\n", name[course[i][j]]);
//		}
//	}
//	return 0;
//}



//vector<string> courseVec[2510];
//
////int getID(char name[]) {
////	int id=0;
////	for (int i = 0; i < 3; i++)
////	{
////		id = id * 26 + name[i] - 'A';
////	}
////	id = id * 26 + name[3] - '0';
////	return id;
////}
//
//int main() {
//	int n, m;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		char name[5];
//		int k;
//		scanf("%s %d", name, &k);
//		//printf("hello: %s\n", name);
//		//int id = getID(name);
//		for (int j = 0; j < k; j++)
//		{
//			int course;
//			scanf("%d", &course);
//			courseVec[course].push_back(name);
//		}
//	}
//	int flag = false;
//	for (int i = 0; i < 2510; i++)
//	{
//		if (courseVec[i].size() > 0) {
//			if (flag) printf("\n");
//			flag = true;
//			sort(courseVec[i].begin(), courseVec[i].end());
//			printf("%d %d", i, courseVec[i].size());
//			for (int j = 0; j < courseVec[i].size(); j++)
//			{
//				printf("\n%s", courseVec[i][j]);
//			}
//		}
//	}
//	return 0;
//}