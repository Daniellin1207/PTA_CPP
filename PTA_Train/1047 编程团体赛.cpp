#include "pch.h"
//#include <cstdio>
//#include <cstring>
//#include <map>
//#include <iostream>
//using namespace std;
//
//int main1047() {
//	int n;
//	int team[1010][15] = { 0 };
//	int tempTeam, tempMem, tempScore;
//	int t, m=0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d-%d %d", &tempTeam, &tempMem, &tempScore);
//		team[tempTeam][tempMem] = tempScore;
//	}
//	for (int i = 0; i < 1010; i++)
//	{
//		for (int j = 0; j < 15; j++)
//		{
//			team[i][0] += team[i][j];
//		}
//		if (team[i][0] > m) {
//			t = i;
//			m = team[i][0];
//		}
//	}
//	printf("%d %d", t, m);
//	return 0;
//}