#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//typedef struct time_info {
//	int year;
//	int month;
//	int day;
//}Info;
//int main(void) {
//	Info time;
//	int ret = 1, i, sum = 0;
//	printf("输入年、月、日:");
//	scanf("%d %d %d", &time.year, &time.month, &time.day);
//	if (time.year % 400 == 0 || (time.year % 4 == 0 && time.year % 100 != 0)) {
//		ret = 0; 			//ret=0，则为闰年 
//	}
//	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	for (i = 1; i < time.month; i++) { 			//先算这个月份之前的天数 
//		sum += a[i - 1];			//i从1开始，对应月份，作为下标从0开始，一月对应a[0] 
//	}
//	sum = sum + time.day;		//闰年29天 
//	if (ret == 0)
//		sum = sum + 1;
//	printf("该日在本年中是第%d天", sum);
//	return 0;
//}
