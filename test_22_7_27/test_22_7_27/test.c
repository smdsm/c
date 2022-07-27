#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int a = 10;
	return 0;
}
#include <stdio.h>
int check_sys()
{
	int i = 1;
	return (*(char*)&i);
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <assert.h>

void left(char* str,int len,int num)
{
	assert(str != 0);
	assert((len >0) && (num>=0));
	char temp = 0;
	int i = 0;
	num %= len;
	while (num) 
	{
		temp = str[0];
		for (i = 0; i < len - 1; i++) {
			str[i] = str[i + 1];
		}
		str[i] = temp;
		num--;
	}
}

int main()
{
	char arr[] = "abcdefgh";
	int len = strlen(arr);
	int num = 0;
	printf("请输入要左旋的次数：");
	scanf("%d", &num);
	printf("%s\n", arr);
	left(arr,len,num);
	printf("%s\n", arr);
	return 0;
}