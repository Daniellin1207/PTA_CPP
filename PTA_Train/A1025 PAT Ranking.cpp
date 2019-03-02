#include "pch.h"
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//using namespace std;

//struct Student {
//	char id[15];
//	int score;
//	int team;
//	int final_rank;
//	int local_rank;
//}stu[31010];
//
//bool cmp(Student a, Student b) {
//	if (a.score != b.score) return a.score > b.score;
//	else return (strcmp(a.id, b.id) < 0);
//}
//
//int main1025a() {
//	int n;
//	int stuN=0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		int m;
//		scanf("%d", &m);
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%s %d", stu[stuN].id, &stu[stuN].score);
//			stu[stuN].team = i;
//			stuN++;
//		}
//		sort(stu + stuN - m, stu+stuN, cmp);
//		stu[stuN - m].local_rank = 1;
//		for (int j = stuN - m+1; j < stuN; j++) {
//			if (stu[j - 1].score != stu[j].score) stu[j].local_rank = j - stuN + m+1;
//			else stu[j].local_rank = stu[j - 1].local_rank;
//		}
//	}
//	sort(stu, stu+stuN, cmp);
//	stu[0].final_rank = 1;
//	for (int i = 1; i < stuN; i++)
//	{
//		if (stu[i - 1].score > stu[i].score) stu[i].final_rank = i + 1;
//		else stu[i].final_rank = stu[i - 1].final_rank;
//	}
//	printf("%d\n", stuN);
//	for (int i = 0; i < stuN; i++)
//	{
//		printf("%s %d %d %d", stu[i].id, stu[i].final_rank, stu[i].team, stu[i].local_rank);
//		if (i != stuN - 1) printf("\n");
//	}
//}