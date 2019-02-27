#include "pch.h"
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//const int maxn = 100010;
//struct Node {
//	int data, address, next;
//	bool flag;
//}node[maxn];
//
//bool cmp(Node a, Node b) {
//	if (!a.flag || !b.flag) return a.flag > b.flag;
//	else return a.data < b.data;
//}
//
//int main1052a() {
//	for (int i = 0; i < maxn; i++)
//	{
//		node[i].flag = false;
//	}
//	int n;
//	int firAdd;
//	int add;
//	scanf("%d%d", &n,&firAdd);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &add);
//		scanf("%d%d", &node[add].data, &node[add].next);
//		node[add].address = add;
//	}
//	int p=firAdd,count=0;
//	while (p != -1) {
//		node[p].flag = true;
//		count++;
//		p = node[p].next;
//	}
//	if (count == 0) printf("0 -1");
//	else {
//		sort(node, node + maxn, cmp);
//		printf("%d %05d\n", count, node[0].address);
//		for (int i = 0; i < count; i++)
//		{
//			if(i!=count-1) printf("%05d %d %05d\n", node[i].address, node[i].data, node[i+1].address);
//			else printf("%05d %d -1\n", node[i].address, node[i].data);
//		}
//	}
//	return 0;
//}
//



















//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//using namespace std;

//const int maxn = 100005;
//struct Node {
//	int address, data, next;
//	bool flag;
//}node[maxn];
//
//bool cmp(Node a, Node b) {
//	if (a.flag == false || b.flag == false) {
//		return a.flag > b.flag;
//	}
//	else {
//		return a.data < b.data;
//	}
//}
//
//int main1052a() {
//	for (int i = 0; i < maxn; i++)
//	{
//		node[i].flag = false;
//	}
//	int n, begin, address;
//	scanf("%d%d", &n, &begin);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &address);
//		scanf("%d%d", &node[address].data, &node[address].next);
//		node[address].address = address;
//	}
//	int count = 0, p = begin;
//	while (p != -1) {
//		node[p].flag = true;
//		count++;
//		p = node[p].next;
//	}
//	if (count == 0) {
//		printf("0 -1");
//	}
//	else {
//		sort(node, node + maxn, cmp);
//		printf("%d %05d\n", count, node[0].address);
//		for (int i = 0; i < count; i++)
//		{
//			if (i != count - 1) {
//				printf("%05d %d %05d\n", node[i].address, node[i].data, node[i + 1].address);
//			}
//			else {
//				printf("%05d %d -1\n", node[i].address, node[i].data);
//			}
//		}
//	}
//	return 0;
//}


//const int maxn = 100010;
//struct NODE {
//	int val;
//	int next;
//}node[maxn];
//
//bool cmp(NODE a, NODE b) {
//	return a.val < b.val;
//}
//
//int main() {
//	int n, s;
//	scanf("%d%d", &n, &s);
//	int address, val, next;
//	for ( int i = 0; i < n; i++)
//	{
//		scanf("%d%d%d", &address, &val, &next);
//		node[address].val = val;
//		node[address].next = next;
//	}
//	int first = s;
//	for (int i = 0; i < n; i++)
//	{
//		int temp=first;
//		for (int q = node[first].next; node[q].next != -1; q = node[q].next)
//		{
//			int t_next;
//			if (node[temp].val>node[q].val) {
//				if (q == node[first].next) {
//					t_next = node[q].next;
//					node[q].next = node[first].next;
//					node[first].next = t_next;
//					first = q;
//				}
//				else {
//					t_next = node[q].next;
//					node[q].next = temp;
//					node[temp].next = t_next;
//
//					t_next = q;
//					q = temp;
//					temp = t_next;
//				}
//			}
//			temp = node[temp].next;
//		}
//	}
//	int p;
//	for(p=first;node[p].next!=-1;p=node[p].next)
//	{
//		printf("%05d %d %05d\n", p, node[p].val, node[p].next);
//	}
//	printf("%05d %d -1", p, node[p].val);
//	return 0;
//}