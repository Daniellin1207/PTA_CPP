#include "pch.h"
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn = 10010;

//struct Student {
//	int rank;
//	int perfect = 0;
//	int id;
//	int all_score = 0;
//	int s[5] = {-1,-1,-1,-1,-1};
//	bool flag=false;
//}stu[maxn];
//
//struct Record {
//	int id;
//	int probId;
//	int score;
//}rec[100010];
//
//bool cmp(Student a, Student b) {
//	if (a.all_score != b.all_score) return a.all_score > b.all_score;
//	else if (a.perfect != b.perfect) return a.perfect > b.perfect;
//	else if (a.flag != b.flag) return a.flag > b.flag;   // 一个点！！！
//	else return a.id < b.id;
//}
//
//int main1075a() {
//	int n, k, m;
//	int scoreN[6];
//	int id, probId, proScore;
//	scanf("%d%d%d", &n, &k, &m);
//
//	// 读入最高分
//	for (int i = 1; i <= k; i++)
//	{
//		scanf("%d", &scoreN[i]);
//	}
//
//	// 读入记录
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d %d %d", &id, &probId, &proScore);
//		stu[id].id = id;
//		if (proScore > -1) {
//			stu[id].flag = true;
//			if (stu[id].s[probId] < proScore) {
//				stu[id].s[probId] = proScore; // 正常得分
//				if (stu[id].s[probId] == scoreN[probId]) {
//					stu[id].perfect++;
//				}
//			}
//		}
//		else stu[id].s[probId] = 0;  // 一个点！！！
//	}
//
//	// 计算总分
//	for (int j = 0; j < maxn; j++)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			if (stu[j].s[i] > -1) stu[j].all_score += stu[j].s[i];
//		}
//	}
//
//	// 根据总分排序
//	sort(stu, stu + maxn, cmp);
//
//	// 输出第一个
//	stu[0].rank = 1;
//	printf("%d %05d %d", stu[0].rank, stu[0].id, stu[0].all_score);
//	for (int i = 1; i <= k; i++)
//	{
//		if (stu[0].s[i] >= 0) printf(" %d", stu[0].s[i]);
//		else printf(" -");
//	}
//	printf("\n");
//
//	// 输出之后
//	int i = 1;
//	while(true)
//	{
//		if (stu[i].flag == false) break;
//		if (stu[i].all_score == stu[i - 1].all_score) stu[i].rank = stu[i - 1].rank;
//		else stu[i].rank = i + 1;
//		printf("%d %05d %d", stu[i].rank, stu[i].id, stu[i].all_score);
//
//		for (int j = 1; j <= k; j++)
//		{
//			if (stu[i].s[j] >= 0) printf(" %d", stu[i].s[j]);
//			else printf(" -");
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}