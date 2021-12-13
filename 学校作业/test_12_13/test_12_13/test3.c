#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void TongJi(char s[],int * ZiMu,int* KongGe,int* ShuZi,int* QiTa);
//int main()
//{
//	char s[100];
//	int  ZiMu = 0, KongGe = 0, ShuZi = 0, QiTa = 0;
//	printf("ÇëÊäÈë×Ö·û´®£º");
//	gets(s);
//	TongJi(s,&ZiMu,&KongGe,&ShuZi,&QiTa);
//	printf("¿Õ¸ñ£º%d£»Êý×Ö£º%d£»×ÖÄ¸£º%d£»ÆäËû£º%d¡£\n", KongGe, ShuZi, ZiMu, QiTa);
//	return 0;
//}
//
//void TongJi(char s[], int* ZiMu, int* KongGe, int* ShuZi, int* QiTa)
//{
//	int i;
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		if (s[i] == 32) (*KongGe)++;
//		else if ((s[i] >= 48) && (s[i] <= 57)) (*ShuZi)++;
//		else if (((s[i] >= 97) && (s[i] <= 122)) || ((s[i] >= 65) && (s[i] <= 90))) (*ZiMu)++;
//		else (*QiTa)++;
//	}
//}
//
