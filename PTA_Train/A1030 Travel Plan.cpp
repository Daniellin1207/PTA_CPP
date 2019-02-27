#include "pch.h"
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//const int maxn = 510;
//int n,m,sc,dc;
//int G[maxn][maxn], cost[maxn][maxn];
//int d[maxn],c[maxn],pre[maxn];
//int INF = 1e9;
//bool vis[maxn] = { false };
//void Dijstra(int s) {
//	fill(d, d + maxn, INF);
//	fill(c, c + maxn, INF);
//	for (int i = 0; i < n; i++) pre[i] = i;
//	d[s] = 0;
//	c[s] = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int u = -1, MIN = INF;
//		for (int j = 0; j < n; j++)
//		{
//			if (!vis[j] && d[j] < MIN) {
//				u = j;
//				MIN = d[j];
//			}
//		}
//		if (u == -1) return;
//		vis[u] = true;
//		for (int v = 0; v < n; v++)
//		{
//			if (!vis[v] && G[u][v] != INF) {
//				if (d[v] > d[u] + G[u][v]) {
//					d[v] = d[u] + G[u][v];
//					c[v] = c[u] + cost[u][v];
//					pre[v] = u;
//				}
//				else if (d[u] + G[u][v] == d[v]) {
//					if (c[u] + cost[u][v] < c[v]) {
//						c[v] = c[u] + cost[u][v];
//						pre[v] = u;
//					}
//				}
//			}
//		}
//	}
//}
//void DFS(int v) {
//	if (v == sc) {
//		printf("%d ", v);
//		return;
//	}
//	DFS(pre[v]);
//	printf("%d ", v);
//}
//int main() {
//	scanf("%d%d%d%d", &n,&m,&sc,&dc);
//	fill(G[0], G[0] + maxn * maxn, INF);
//	for (int i = 0; i < m; i++)
//	{
//		int u,v;
//		scanf("%d%d", &u,&v);
//		scanf("%d%d", &G[u][v], &cost[u][v]);
//		G[v][u] = G[u][v];
//		cost[v][u] = cost[u][v];
//	}
//	Dijstra(sc);
//	DFS(dc);
//	printf("%d %d\n", d[dc], c[dc]);
//	return 0;
//}