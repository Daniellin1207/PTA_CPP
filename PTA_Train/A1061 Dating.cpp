#include "pch.h"
#include <cstdio>
#include <cstring>

//int main1061a() {
//	char week[7][5] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
//	char str[4][70];
//	int len[4];
//	scanf("%s %s %s %s", &str[0], &str[1], &str[2], &str[3]);
//	len[0] = strlen(str[0]);
//	len[1] = strlen(str[1]);
//	len[2] = strlen(str[2]);
//	len[3] = strlen(str[3]);
//	int i;
//	for (i = 0; i < len[0] && i < len[1]; i++)
//	{
//		if (str[0][i] == str[1][i] && str[0][i] >= 'A' && str[0][i] <= 'G')
//		{
//			printf("%s ", week[str[0][i] - 'A']);
//			break;
//		}
//	}
//	for (i++; i < len[0] && i < len[1]; i++) {
//		if (str[0][i] == str[1][i])
//		{
//			if (str[0][i] >= '0' && str[1][i] <= '9') {
//				printf("%02d:", str[0][i] - '0');
//				break;
//			}
//			else if (str[0][i] >= 'A' && str[1][i] <= 'N')
//			{
//				printf("%02d:", str[0][i] - 'A' + 10);
//				break;
//			}
//		}
//	}
//	for (i = 0; i < len[2] && i < len[3]; i++) {
//		if (str[2][i] == str[3][i]) {
//			if ((str[2][i] >= 'A' && str[2][i] <= 'Z') || (str[2][i] >= 'a' && str[2][i] <= 'z')) {
//				printf("%02d", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}