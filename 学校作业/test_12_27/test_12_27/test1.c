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
//	printf("�����ꡢ�¡���:");
//	scanf("%d %d %d", &time.year, &time.month, &time.day);
//	if (time.year % 400 == 0 || (time.year % 4 == 0 && time.year % 100 != 0)) {
//		ret = 0; 			//ret=0����Ϊ���� 
//	}
//	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	for (i = 1; i < time.month; i++) { 			//��������·�֮ǰ������ 
//		sum += a[i - 1];			//i��1��ʼ����Ӧ�·ݣ���Ϊ�±��0��ʼ��һ�¶�Ӧa[0] 
//	}
//	sum = sum + time.day;		//����29�� 
//	if (ret == 0)
//		sum = sum + 1;
//	printf("�����ڱ������ǵ�%d��", sum);
//	return 0;
//}
