#include "pch.h"
#include <cstdio>

//struct person {
//	int h, m, s;
//	char id[20];
//}temp, early, late;
//
//bool earlier(person a, person b) {
//	if (a.h != b.h) return a.h < b.h;
//	else if (a.m != b.m)return a.m < b.m;
//	else return a.s < b.s;
//}
//
//int main1006a() {
//	early = { 24,59,59 };
//	late = { 0,0,0 };
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d:%d:%d", temp.id, &temp.h, &temp.m, &temp.s);
//		if (earlier(temp, early)) early = temp;
//		scanf("%d:%d:%d", &temp.h, &temp.m, &temp.s);
//		if (earlier(late, temp)) late = temp;
//	}
//	printf("%s %s\n", early.id, late.id);
//	return 0;
//}