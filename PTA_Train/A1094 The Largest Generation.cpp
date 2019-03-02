#include "pch.h"
//#include <stdio.h>
//#include <vector>
//using namespace std;
//const int MAXN = 110;
//vector<int> Node[MAXN];
//int hashTable[MAXN] = { 0 };
//void DFS(int index, int level) {
//	hashTable[level]++;
//	for (int j = 0; j < Node[index].size(); j++) {
//		DFS(Node[index][j], level + 1);
//	}
//}
//
//int main1094a() {
//	int n, m, parent, k, child;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < m; i++) {
//		scanf("%d%d", &parent, &k);
//		for (int j = 0; j < k; j++) {
//			scanf("%d", &child);
//			Node[parent].push_back(child);
//		}
//	}
//	DFS(1, 1);
//	int maxLevel = -1, maxValue = 0;
//	for (int i = 1; i < MAXN; i++) {
//		if (hashTable[i] > maxValue) {
//			maxValue = hashTable[i];
//			maxLevel = i;
//		}
//	}
//	printf("%d %d\n", maxValue, maxLevel);
//	return 0;
//}