#include "pch.h"
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;


int n, m, k, ds;

int getID(string a) {
	int value=0;
	for ( int i = 0; i < a.length(); i++)
	{
		value = value * 10 + a[i] - '0';
	}
	return value;
}

int main() {
	string a;
	cin >> a;
	printf("%s\n", a.c_str());
	a.erase(a.begin()+2);
	printf("%s\n", a.c_str());

	//scanf("%d%d%d%d", &n, &m, &k, &ds);
	//string c1, c2;
	//int road,u,v;
	//for (int i = 0; i < k; i++)
	//{
	//	cin >> c1 >> c2 >> road;
	//	if (c1[0] != 'G') {
	//		u = getID(c1);
	//	}
	//	else {
	//		c1.erase(c1.begin());

	//		//u = getID() + n;
	//	}
	//}
	//return 0;
}



//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//const int maxn = 100010;
//struct Node {
//	int Addr,Key,Next;
//	bool vis;
//}node[maxn];
//
//bool cmp(Node a, Node b) {
//	if (!a.vis || !b.vis) return a.vis > b.vis;
//	else return a.Key < b.Key;
//};
//
//int n;
//int root;
//int add, k, nxt;
//
//int main1052a() {
//	for (int i = 0; i < maxn; i++)
//	{
//		node[i].vis = false;
//	}
//	scanf("%d%d", &n,&root);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &add);
//		scanf("%d%d", &node[add].Key,&node[add].Next);
//		node[add].Addr = add;
//		node[add].vis = true;
//	}
//	sort(node, node + maxn, cmp);
//	printf("%d %05d\n", n, node[0].Addr);
//	for (int i = 0; i < n-1; i++)
//	{
//		printf("%05d %d %05d\n", node[i].Addr,node[i].Key,node[i+1].Addr);
//	}
//	printf("%05d %d -1", node[n - 1].Addr, node[n - 1].Key);
//	return 0;
//}




//#include <cstdio>
//#include <cstring>
//#include <map>
//#include <iostream>
//using namespace std;
//map<int, int> countMap;
//
//int getValue(char a) {
//	return int(a - '0');
//}
//bool flag = true;
//int main1023a() {
//	char c_num[25];
//	int num[25],temp=0;
//	scanf("%s",c_num);
//	for (int i = 0; i < strlen(c_num); i++)
//	{
//		if (countMap.find(getValue(c_num[i])) != countMap.end()) countMap[getValue(c_num[i])]++;
//		else countMap[getValue(c_num[i])] = 1;
//	}
//
//	for (int i = strlen(c_num)-1; i >=0; i--)
//	{
//
//		num[i] = ((c_num[i] - '0') * 2 + temp )% 10 ;
//		temp = ((c_num[i] - '0') * 2 + temp )/ 10 ;
//		if (countMap.find(num[i]) != countMap.end()) {
//			if(countMap[num[i]]>0) countMap[num[i]]--;
//			else {
//				flag = false;
//			}
//		}
//		else {
//			flag = false;
//		}
//		if (i == 0) {
//			if (temp > 0) {
//				flag = false;
//			}
//		}
//	}
//	if (flag) {
//		printf("Yes\n");
//	}
//	else {
//		printf("No\n1");
//	}
//	for (int i = 0; i < strlen(c_num); i++)
//	{
//		printf("%d", num[i]);
//	}
//	return 0;
//}