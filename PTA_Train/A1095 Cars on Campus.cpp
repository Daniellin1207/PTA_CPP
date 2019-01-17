#include "pch.h"
#include <cstdio>
#include <map>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn = 10010;
struct Car {
	char id[8];
	int time;
	char status[4];
}all[maxn],valid[maxn];

int num = 0;
map<string, int> parkTime;

int timeToInt(int hh, int mm, int ss) {
	return hh * 3600 + mm * 60 + ss;
}

bool cmpByIdAndTime(Car a, Car b) {
	if (strcmp(a.id, b.id)) return strcmp(a.id, b.id) < 0;
	else return a.time < b.time;
}

bool cmpByTime(Car a, Car b) {
	return a.time < b.time;
}

int main1095a() {
	int n, k, hh, mm, ss;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d:%d:%d %s", all[i].id, &hh, &mm, &ss, all[i].status);
		all[i].time = timeToInt(hh, mm, ss);
	}
	sort(all, all + n, cmpByIdAndTime);
	int maxTime = -1;
	for (int i = 0; i < n-1; i++)
	{
		if (!strcmp(all[i].id, all[i + 1].id) && !strcmp(all[i].status, "in") && !strcmp(all[i + 1].status, "out")) {
			valid[num++] = all[i];
			valid[num++] = all[i + 1];
			int inTime = all[i + 1].time - all[i].time;
			if (parkTime.count(all[i].id) == 0) {
				parkTime[all[i].id] == 0;
			}
			parkTime[all[i].id] += inTime;
			maxTime = max(maxTime, parkTime[all[i].id]);
		}
	}
	sort(valid, valid + num, cmpByTime);

	int now = 0, numCar = 0;
	for (int i = 0; i < k; i++)
	{
		scanf("%d:%d:%d", &hh, &mm, &ss);
		int time = timeToInt(hh, mm, ss);
		while (now < num && valid[now].time <= time) {
			if (!strcmp(valid[now].status, "in")) numCar++;
			else numCar--;
			now++;
		}
		printf("%d\n", numCar);
	}
	map<string, int>::iterator it;
	for (it = parkTime.begin(); it != parkTime.end(); it++) {
		if (it->second == maxTime) {
			printf("%s ", it->first.c_str());
		}
	}
	printf("%02d:%02d:%02d\n", maxTime / 3600, maxTime % 3600 / 60, maxTime % 60);
	return 0;
}





//// 因为要输出最长停车 因此要排序
//struct Car {
//	char id[10];
//	int time=0;
//}cars[10010];
//
//struct Record {
//	char id[10];
//	int hh, mm, ss;
//	char state[5];
//}rec[10010],query[80010];
//
//struct Time {
//	int hh=24, mm=0, ss=0;
//	int num=0;
//}times[10010];
//
//bool cmp(Record a, Record b) {
//	if (a.hh != b.hh) return a.hh < b.hh;
//	else if (a.mm != b.mm) return a.mm < b.mm;
//	else return a.ss < b.ss;
//}
//
//bool cmpTime(Time a, Time b) {
//	if (a.hh != b.hh) return a.hh < b.hh;
//	else if (a.mm != b.mm) return a.mm < b.mm;
//	else return a.ss < b.ss;
//}
//
//
//bool cmpId(Record a, Record b) {
//	if (strcmp(a.id, b.id) != 0) return strcmp(a.id, b.id) < 0;
//	else return cmp(a, b);
//}
//
//int cut(Record a, Record b) {
//	return (a.hh - b.hh) * 60 * 60 + (a.mm - b.mm) * 60 + (a.ss - b.ss);
//}
//
//int cutT(Time a, Record b) {
//	return (a.hh - b.hh) * 60 * 60 + (a.mm - b.mm) * 60 + (a.ss - b.ss);
//}
//
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//
//	// 录入数据
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d:%d:%d %s", rec[i].id, &rec[i].hh, &rec[i].mm, &rec[i].ss, rec[i].state);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d:%d:%d", &query[i].hh, &query[i].mm, &query[i].ss);
//	}
//
//	sort(rec, rec + n, cmpId);
//
//	// 挑选符合条件记录==>times==>cars
//	times[0] = {
//		rec[0].hh,rec[0].mm,rec[0].ss,0
//	};
//	int i;
//	for ( i = 1; i < n; i++)
//	{
//		if (strcmp(rec[i-1].id, rec[i].id) == 0) {
//			if (strcmp(rec[i - 1].state, rec[i].state) < 0) {
//				times[i].hh = rec[i-1].hh;			
//				times[i].mm = rec[i-1].mm;			
//				times[i].ss = rec[i-1].ss;			
//				times[i].num = 1;					
//				times[i+1].hh = rec[i].hh;			
//				times[i+1].mm = rec[i].mm;			
//				times[i+1].ss = rec[i].ss;			
//				times[i+1].num = -1;				
//
//				strcpy(cars[i].id, rec[i].id);
//				cars[i].time += cut(rec[i], rec[i - 1]);
//			}
//		}
//	}
//	sort(times, times + n+2, cmpTime);
//	// 查询车位数
//	int temp=-1;
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (; temp < n; ++temp) {
//			count += times[temp].num;
//			if (cutT(times[temp], query[i]) <= 0 ) {
//				if (cutT(times[temp + 1], query[i]) > 0)
//				{
//					printf("%d\n", count);
//					break;
//				}
//			}
//		}
//	}
//	// 查询最长时长
//
//}