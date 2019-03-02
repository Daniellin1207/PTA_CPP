#include "pch.h"
//#include <cstdio>
//using namespace std;
//
//const int maxn = 510;
//int INF = 1e9;
//int d[maxn], G[maxn][maxn];
//bool vis[maxn] = { false };
//int res[maxn],ans=0;
//
//int n, m, cityS, cityE;
//void Dijkstra(int s) {
//	d[s] = 0;
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
//
//				}
//				else if (d[v] == d[u] + G[u][v]) {
//
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	scanf("%d%d%d%d", &n,&m,&cityS,&cityE);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &res[i]);
//	}
//	int c1, c2,dist;
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d%d%d", &c1, &c2,&dist);
//		G[c1][c2] = dist;
//		G[c2][c1] = dist;
//	}
//
//
//	return 0;
//}























//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//const int MAXV = 510;
//const int INF = 1000000000;
//
//int n, m, st, ed, G[MAXV][MAXV], weight[MAXV];
//int d[MAXV], w[MAXV], num[MAXV];
//bool vis[MAXV] = { false };
//void Dijkstra(int s) {
//	fill(d, d + MAXV, INF);
//	memset(w, 0, sizeof(w));
//	d[s] = 0;
//	w[s] = weight[s];
//	num[s] = 1;
//	for (int i = 0; i < n; i++)
//	{
//		int u = -1, MIN = INF;
//		for (int j = 0; j < n; j++)
//		{
//			if (vis[j] == false && d[j] < MIN) {
//				u = j;
//				MIN = d[j];
//			}
//		}
//		if (u == -1) return;
//		vis[u] = true;
//		for (int v = 0; v < n; v++)
//		{
//			if (vis[v] == false && G[u][v] != INF) {
//				if (d[u] + G[u][v] < d[v]) {
//					d[v] = d[u] + G[u][v];
//					w[v] = w[u] + weight[v];
//					num[v] = num[u];
//				}
//				else if (d[u] + G[u][v] == d[v]) {
//					if (w[u] + weight[v] > w[v]) {
//						w[v] = w[u] + weight[v];
//					}
//					num[v] += num[u];
//				}
//			}
//		}
//	}
//}
//int main1003a() {
//	scanf("%d%d%d%d", &n, &m, &st, &ed);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &weight[i]);
//	}
//	int u, v;
//	fill(G[0], G[0] + MAXV * MAXV, INF);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d%d", &u, &v);
//		scanf("%d", &G[u][v]);
//		G[v][u] = G[u][v];
//	}
//	Dijkstra(st);
//	printf("%d %d\n", num[ed], w[ed]);
//	return 0;
//}