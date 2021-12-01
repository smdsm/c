#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void ResverArr(char* begin, char* end)
{
    while (begin < end)
    {
        char tmp;
        tmp = *begin;
        *begin = *end;
        *end = tmp;
        begin++;
        end--;
    }
}
int main()
{
    char arr[100] = { 0 };
    int sz = 0;
    int i = 0;
    int j = 0;
    gets(arr);
    sz = strlen(arr);
    ResverArr(arr, arr + sz - 1);
    for (i = 0; i < sz; i++)
    {
        if (arr[i] == ' ')
        {
            ResverArr(arr + j, arr + i - 1);
            j = i + 1;
        }
        
        if (i == sz - 1)
        {
            ResverArr(arr + j, arr + i);
        }
    }
    printf("%s\n", arr);
    return 0;
}