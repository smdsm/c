#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//
//
//int main()
//{
//
//	return 0;
//}

#include <stdio.h>
int int_cmp(const void* p1, const void* p2)
{
    return (*(int*)p1 - *(int*)p2);
}
void _swap(void* p1, void* p2, int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        char tmp = *((char*)p1 + i);
        *((char*)p1 + i) = *((char*)p2 + i);
        *((char*)p2 + i) = tmp;
    }
}
void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
{
    int i = 0;
    int j = 0;
        for (i = 0; i < count - 1; i++)
        {
            for (j = 0; j < count - i - 1; j++)
            {
                if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
                {
                    _swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
                }
            }
        }
}
//int main()
//{
//    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//    //char *arr[] = {"aaaa","dddd","cccc","bbbb"};
//    int i = 0;
//    bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}

#include <windows.h>

//int main()
//{
//    char a = 101;
//    int sum = 200;
//    //a += 27; sum += a;
//    //printf("%d\n", sum);
//    for (int i = 0; i < 256; i++)
//    {
//        a++;
//        printf("%d\n", a);
//        Sleep(500);
//    }
//    return 0;
//}

int main()
{
    int value = 1024;
    //00000000000000000000010000000000
    // 00  00  04  00
    //
    char condition = *((char*)(&value));//00
    if (condition)
        value += 1;
    condition = *((char*)(&value));
    if (condition)
        value += 1; 
    condition = *((char*)(&value));
    printf("%d %d", value, condition);

    return 0;
}
