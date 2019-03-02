#include "pch.h"
//#include <cstdio>
//#include <string>
//#include <map>
//#include <iostream>
//using namespace std;
//
//string unitDigit[13] = { "tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec" };
//string tenDigit[13] = { "tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou" };
//string numToStr[170];
//map<string, int> strToNum; // 字典保存 字符(任意)=>>整型(任意) 映射
//						   // 数组保存 整型=>>其他 映射
//void init() {
//	for (int i = 0; i < 13; i++)
//	{
//		numToStr[i] = unitDigit[i];
//		strToNum[unitDigit[i]] = i;
//		numToStr[i * 13] = tenDigit[i];
//		strToNum[tenDigit[i]] = 13 * i;
//	}
//	for (int i = 1; i < 13; i++)
//	{
//		for (int j = 1; j < 13; j++)
//		{
//			string str = tenDigit[i] + " " + unitDigit[j];
//			numToStr[i * 13 + j] = str;
//			strToNum[str] = i * 13 + j;
//		}
//	}
//}
//int main1100a() {
//	init();
//	int T;
//	scanf("%d%*c", &T);
//	while (T--) {
//		string str;
//		getline(cin, str);
//		if (str[0] >= '0' && str[0] <= '9') {
//			int num = 0;
//			for (int i = 0; i < str.length(); i++)
//			{
//				num = num * 10 + (str[i] - '0');
//			}
//			cout << numToStr[num] << endl;
//		}
//		else {
//			cout << strToNum[str] << endl;
//		}
//	}
//	return 0;
//}