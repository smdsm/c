#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void cpy(char a[], char b[]);
//int main()
//{
//	char a[300],b[300];
//	gets(a);
//	cpy(a, b);
//	printf("%s", b);
//	return 0;
//}
void cpy(char a[40], char b[40])
{
	int i = 0,j = 0;
	while (a[i] != '\0')
	{
		if (a[i] == 'a' || a[i] == 'A' ||
			a[i] == 'e' || a[i] == 'E' ||
			a[i] == 'i' || a[i] == 'I' ||
			a[i] == 'o' || a[i] == 'O' ||
			a[i] == 'u' || a[i] == 'U'){ 
			b[j] = a[i];
			j++;
			b[j] = '\0';}
		i++;
	}
}
