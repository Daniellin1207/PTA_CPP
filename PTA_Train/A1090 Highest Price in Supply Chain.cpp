#include "pch.h"
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//using namespace std;
//const int maxn = 100010;
//int maxDepth = 0;
//int countNum = 0;
//
//vector<int> child[maxn];
//
//
//void DFS(int s,int depth) {
//	if (child[s].size() == 0) {
//		if (depth > maxDepth) {
//			maxDepth = depth;
//			countNum = 1;
//		}
//		else if (depth == maxDepth) {
//			countNum += 1;
//		}
//		return;
//	}
//	for (int i = 0; i < child[s].size(); i++)
//	{
//		DFS(child[s][i], depth+1);
//	}
//}
//
//
//int main() {
//	int n;
//	float price, r;
//	scanf("%d%f%f", &n, &price, &r);
//	r /= 100;
//	int begin;
//	int k;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		if (k == -1) {
//			begin = i;
//			continue;
//		}
//		child[k].push_back(i);
//	}
//	DFS(begin, 0);
//	printf("%.2f %d", price*pow(1 + r, maxDepth), countNum);
//	return 0;
//}
//
//
//
//
//
//
//
//
//




















//#include <stdio.h>
//#include <cmath>
//#include <vector>
//using namespace std;
//const int maxn = 100010;
//vector<int> child[maxn];
//double p, r;
//
//int n, maxDepth = 0, num = 0;
//void DFS(int index, int depth) {
//	if (child[index].size() == 0) {
//		if (depth > maxDepth) {
//			maxDepth = depth;
//			num = 1;
//		}
//		else if (depth == maxDepth) {
//			num++;
//		}
//		return;
//	}
//	for (int i = 0; i < child[index].size(); i++) {
//		DFS(child[index][i], depth + 1);
//	}
//}
//
//int main1090a() {
//	int father, root;
//	scanf("%d%lf%lf", &n, &p, &r);
//	r /= 100;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &father);
//		if (father != -1) {
//			child[father].push_back(i);
//		}
//		else {
//			root = i;
//		}
//	}
//	DFS(root, 0);
//	printf("%.2f %d\n", p*pow(1 + r, maxDepth), num);
//	return 0;
//}