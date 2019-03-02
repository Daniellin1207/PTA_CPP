#include "pch.h"
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int maxn = 100010;
//
//struct Person {
//	char name[10];
//	int age;
//	int worth;
//}peo[maxn],valid[maxn];
//
//bool cmp(Person a, Person b) {
//	if (a.worth != b.worth) return a.worth > b.worth;
//	else if (a.age != b.age) return a.age < b.age;
//	else return strcmp(a.name, b.name) < 0;
//}
//
//int main1055a() {
//	int n, m;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d %d", peo[i].name, &peo[i].age, &peo[i].worth);
//	}
//	sort(peo, peo + n, cmp);
//
//	int temp = 0;
//	for (int i = 0; i < m; i++)
//	{
//		int num, maxN, minN;
//		scanf("%d%d%d", &num, &minN, &maxN);
//		printf("Case #%d:\n", i + 1);
//		for (int j = 0; j < n; j++)
//		{
//			if (peo[j].age<=maxN && peo[j].age>=minN ) {
//				temp++;
//				printf("%s %d %d\n", peo[j].name, peo[j].age, peo[j].worth);
//				if (temp >= num) break;
//			}
//		}
//		if (temp == 0) printf("None\n");
//		else temp = 0;
//	}
//	return 0;
//}