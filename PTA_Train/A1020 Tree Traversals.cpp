#include "pch.h"
#include <stdio.h>
#include <cstring>
#include <queue>
#include <algorithm>
//using namespace std;
//
//const int maxn = 50;
//struct node {
//	int data;
//	node* lchild;
//	node* rchild;
//};
//
//int in[maxn], post[maxn];
//int num = 0;
//int n;
//
//node* create(int postL, int postR, int inL, int inR) {
//	if (postL > postR) return NULL;
//	node* root = new node;
//	root->data = post[postR];
//	int i;
//	for (i = inL; i <=inR; i++)
//	{
//		if (in[i] == root->data) {
//			break;
//		}
//	}
//	int numLeft = i - inL;
//	root->lchild = create(postL, postL + numLeft - 1, inL, i - 1);
//	root->rchild = create(postL + numLeft, postR - 1, i + 1, inR);
//	return root;
//}
//
//
//void BFS(node* &root) {
//	queue<node*> q;
//	q.push(root);
//	while (!q.empty()) {
//		node* now = q.front();
//		q.pop();
//		printf("%d", now->data);
//		num++;
//		if (num < n) printf(" ");
//		if (now->lchild != NULL) q.push(now->lchild);
//		if (now->rchild != NULL) q.push(now->rchild);
//	}
//}
//
//int main1020a() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &post[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &in[i]);
//	}
//	node* root = create(0, n - 1, 0, n - 1);
//	BFS(root);
//	return 0;
//}
