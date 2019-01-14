#include "pch.h"
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main1031a() {
	char str[100];
	//getc(str);
	cin.getline(str,100);
	int N = strlen(str);
	int n1;
	int n3;
	if ((N + 2) % 3 == 0) 
	{
		n1 = (N + 2) / 3;
	}
	else if ((N+2)%3==1)
	{
		n1 = (N + 2) / 3;
	}
	else
	{
		n1 = N / 3 + 1;
	}
	n3 = N - 2 * n1;
	for (int i = 0; i < n1-1; i++)
	{
		printf("%c", str[i]);
		for (int j = 0; j < n3; j++)
		{
			printf(" ");
		}
		printf("%c\n", str[N - 1 - i]);
	}
	for (int i = 0; i < n3; i++)
	{
		printf("%c", str[i + n1 - 1]);
	}
	return 0;
}