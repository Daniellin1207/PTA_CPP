#include "pch.h"
//#include <cstdio>
//#include <vector>
//using namespace std;
//const int N = 1111;
//vector<int> G[N];
//
//int father[N];
//bool vis[N];
//int findFather(int x) {
//	int a = x;
//	while (x != father[x]) {
//		x = father[x];
//	}
//	while (a != father[a]) {
//		int z = a;
//		a = father[a];
//		father[z] = x;
//	}
//	return x;
//}
//void Union(int a, int b) {
//	int faA = findFather(a);
//	int faB = findFather(b);
//	if (faA != faB) {
//		father[faA] = faB;
//	}
//}
//void init() {
//	for (int i = 1; i <= N; i++)
//	{
//		father[i] = i;
//		vis[i] = false;
//	}
//}
//int n, m, k;
//int main1013a() {
//	scanf("%d%d%d", &n, &m, &k);
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		scanf("%d%d", &a, &b);
//		G[a].push_back(b);
//		G[b].push_back(a);
//	}
//	int currentPoint;
//	for (int query = 0; query < k; query++)
//	{
//		scanf("%d", &currentPoint);
//		init();
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 0; j < G[i].size(); j++)
//			{
//				int u = i, v = G[i][j];
//				if (u == currentPoint || v == currentPoint) continue;
//				Union(u, v);
//			}
//		}
//		int block = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			if (i == currentPoint) continue;
//			int fa_i = findFather(i);
//			if (vis[fa_i] == false) {
//				block++;
//				vis[fa_i] = true;
//			}
//		}
//		printf("%d\n", block - 1);
//	}
//	return 0;
//}


//#include <cstdio>
//#include <cstring>
//#include <vector>
//using namespace std;
//const int N = 1111;
//vector<int> G[N];
//bool vis[N];
//
//int currentPoint;
//void dfs(int v) {
//	if (v == currentPoint) return;
//	vis[v] = true;
//	for (int i = 0; i < G[v].size(); i++)
//	{
//		if (vis[G[v][i]] == false) {
//			dfs(G[v][i]);
//		}
//	}
//}
//
//int n, m, k;
//int main1013a() {
//	scanf("%d%d%d", &n, &m, &k);
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		scanf("%d%d", &a, &b);
//		G[a].push_back(b);
//		G[b].push_back(a);
//	}
//	for (int query = 0; query < k; query++)
//	{
//		scanf("%d", &currentPoint);
//		memset(vis, false, sizeof(vis));
//		int block = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			if (i != currentPoint && vis[i] == false) {
//				dfs(i);
//				block++;
//			}
//		}
//		printf("%d\n", block - 1);
//	}
//	return 0;
//}