#include "pch.h"
//#include <vector>
//#include <cmath>
//#include <cstdio>
//const int maxn = 100010;
//struct Node {
//	double data;
//	std::vector<int> child;
//}node[maxn];
//
//int n;
//double p, r, ans = 0.0;
//void DFS(int index,int depth) {
//	if (node[index].child.size() == 0) {
//		ans += node[index].data * pow(1 + r , depth);
//		return;
//	}
//	for (int i = 0; i < node[index].child.size(); i++)
//	{
//		DFS(node[index].child[i], depth + 1);
//	}
//}
//
//int main() {
//	int k, temp;
//	scanf("%d%lf%lf", &n, &p, &r);
//	r /= 100;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		if (k == 0) {
//			scanf("%lf", &node[i].data);
//		}
//		else {
//			for (int j = 0; j < k; j++)
//			{
//				scanf("%d", &temp);
//				node[i].child.push_back(temp);
//			}
//		}
//	}
//	DFS(0, 0);
//	printf("%.1f\n", ans*p);
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
//
//






//using namespace std;
//const int maxn = 100010;
//struct node {
//	double data;
//	vector<int> child;
//}Node[maxn];
//
//int n;
//double p, r, ans = 0;
//void DFS(int index, int depth) {
//	if (Node[index].child.size() == 0) {
//		ans += Node[index].data*pow(1 + r, depth);
//		return;
//	}
//	for (int i = 0; i < Node[index].child.size(); i++) {
//		DFS(Node[index].child[i], depth + 1);
//	}
//}
//int main1079a() {
//	int k, child;
//	scanf("%d%lf%lf", &n, &p, &r);
//	r /= 100;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &k);
//		if (k == 0) {
//			scanf("%lf", &Node[i].data);
//		}
//		else {
//			for (int j = 0; j < k; j++) {
//				scanf("%d", &child);
//				Node[i].child.push_back(child);
//			}
//		}
//	}
//	DFS(0, 0);
//	printf("%.1f\n", p*ans);
//	return 0;
//}
