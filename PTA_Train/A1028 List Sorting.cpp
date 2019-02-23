#include "pch.h"
#include <cstdio>
#include <cstring>
#include <algorithm>
//using namespace std;
//
//const int maxn = 100010;

//struct Student {
//	char id[10];
//	char name[10];
//	int score;
//}stu[maxn];
//
//bool cmpId(Student a, Student b) {
//	return strcmp(a.id, b.id) < 0;
//}
//
//bool cmpName(Student a, Student b) {
//	if (strcmp(a.name, b.name) != 0) return strcmp(a.name, b.name) < 0;
//	else return cmpId(a, b);
//}
//
//bool cmpScore(Student a, Student b) {
//	if (a.score != b.score) return a.score < b.score;
//	else return cmpId(a, b);
//}
//
//int main1028a() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %s %d", stu[i].id, stu[i].name, &stu[i].score);
//	}
//	switch (m)
//	{
//	case 1:
//		sort(stu, stu + n, cmpId);
//		break;
//	case 2:
//		sort(stu, stu + n, cmpName);
//		break;
//	case 3:
//		sort(stu, stu + n, cmpScore);
//		break;
//	default:
//		break;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%s %s %d", stu[i].id, stu[i].name, stu[i].score);
//		if (i != n - 1) printf("\n");
//	}
//	return 0;
//}