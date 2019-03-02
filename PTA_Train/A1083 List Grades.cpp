#include "pch.h"
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int maxn = 10010;

//struct Student {
//	char name[15];
//	char id[15];
//	int grade;
//}stu[maxn];
//
//bool cmp(Student a, Student b) {
//	return a.grade > b.grade;
//}
//
//int main1083a() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s%s%d", stu[i].name, stu[i].id, &stu[i].grade);
//	}
//	sort(stu, stu + n, cmp);
//	int minN, maxN;
//	scanf("%d%d", &minN, &maxN);
//
//	int temp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (stu[i].grade <= maxN && stu[i].grade>=minN) {
//			printf("%s %s", stu[i].name, stu[i].id);
//			temp++;
//			if (i != n) printf("\n");
//		}
//	}
//	if (temp == 0) printf("NONE");
//	return 0;
//}