#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int fun(int n,char a[]);
//    int n;
//    char a[1000];
//    printf("Please input an integer: ");
//    scanf("%d", &n);
//    printf("Switch to string: ");
//    int x = fun(n,a);
//    puts(a);
//    printf("\n");
//    return 0;
//}
//
//int fun(int n, char a[])
//{
//    int i, j;
//    j = 0;
//    while (n > 0)
//    {
//        a[j] = n%10+'0';
//        j++; n /= 10;
//        a[j] = '\0';
//    }
//    for (i = 0; i <j / 2; i++)
//    {
//        char t = a[i]; a[i] = a[j - i-1]; a[j - i-1] = t;
//    }
//    return j - 1;
//}
//
////void fun(int n)
////{
////    int i, j;
////    i = n % 10;
////    j = n / 10;
////    if (j > 0)
////        fun(j);
////    printf("%c", i + '0');
//}
