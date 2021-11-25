#include <stdio.h>
int change(char a[200]);
int main ()
{
	char arr[200]={0};
	gets(arr);
	int n = change(arr);
	if(n > 0)
	{
		printf("%s\n",arr);		
	}
	else
	{
		printf("NO FOUUND is \n");
	}

	return 0;
}
int change(char a[200])
{
	int i = 200;
	int n = 0;
	for (i = 0;i < 200;i++)
	{
		if(a[i] == 'i' && a[i+1] == 's')
		{
			a[i]='b';
			a[i+1]='e';
			i++;
			n++;
		}
	}
	return n;
}
