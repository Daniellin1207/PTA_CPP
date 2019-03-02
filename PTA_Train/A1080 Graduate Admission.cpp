#include "pch.h"
//#include <cstdio>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//const int maxn = 40010;

//struct Student {
//	int id;
//	int GE;
//	int GI;
//	int sum;
//	int Choose[5];
//}stu[maxn];
//
//struct School {
//	int quota;
//	int stuNum=0;
//	int id[maxn];
//	int lastAdmit;
//}sch[110];
//
//bool cmp(Student a, Student b) {
//	if (a.sum != b.sum) return a.sum > b.sum;
//	else return a.GE > b.GE;
//}
//bool cmpID(int a, int b) {
//	return a < b;
//}
//
//int main1080a() {
//	int n, m, k;
//
//	scanf("%d%d%d", &n, &m, &k);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &sch[i].quota);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d%d", &stu[i].GE, &stu[i].GI);
//		stu[i].sum = stu[i].GE + stu[i].GI;
//		stu[i].id = i;
//		for (int j = 0; j < k; j++)
//		{
//			scanf("%d", &stu[i].Choose[j]);
//		}
//	}
//	sort(stu, stu + n, cmp);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			// 第i个学生的 第j个志愿
//			if (sch[stu[i].Choose[j]].stuNum<sch[stu[i].Choose[j]].quota) {
//				sch[stu[i].Choose[j]].id[sch[stu[i].Choose[j]].stuNum] = stu[i].id;
//				sch[stu[i].Choose[j]].stuNum++;
//				break;
//			}
//		}
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		if (sch[i].stuNum>0)
//		{
//			// 第i个学校 录取的第j名学生
//			sort(sch[i].id, sch[i].id + sch[i].stuNum, cmpID);
//			for (int j = 0; j < sch[i].stuNum; j++)
//			{
//				printf("%d", sch[i].id[j]);
//				if (j < sch[i].stuNum - 1) {
//					printf(" ");
//				}
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}