#include "pch.h"
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

char chan[10][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

int main() {
	char n[110];
	int sum=0;
	int out[10];
	scanf("%s", n);
	//cin.getline(n, 110);
	int len = strlen(n);

	for (int i = 0; i < len; i++)
	{
		sum += n[i] - '0';
	}
	if (sum == 0) {
		printf("zero");
		return 0;
	}

	int i=0;
	while (sum!=0) 
	{
		out[i] = sum % 10;
		sum /= 10;
		i++;
	}
	for (int j=i-1; j >=0; j--)
	{
		printf("%s", chan[out[j]]);
		if (j != 0) printf(" ");
	}
	return 0;
}