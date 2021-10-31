#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void chushihua()
{
    printf("#############################\n");
    printf("#############################\n");
    printf("######## 1 . play ###########\n");
    printf("######## 0 . exit ###########\n");
    printf("#############################\n");
    printf("#############################\n");
}

void play()
{
    int rnd = 0;
    int guess = 0;
    //获取随机数
    rnd = rand() % 100 + 1;
    //开始猜数字
    while (1)
    {
        scanf("%d", &guess);
        if (guess > rnd)
        {
            printf("猜大了!\n");

        }
        else if (guess < rnd)
        {
            printf("猜小了!\n");
        }
        else
        {
            printf("恭喜，猜对了!,\n");
            break;

        }

    }
}


int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));

    do
    {
        //初始化
        chushihua();

        //获取选择，存储在input中
        scanf("%d", &input);


        if (input == 1)//判断是开始游戏，还是退出游戏
        {
            printf("开始游戏,请输入数字：\n");
            play();
        }
        else if (input == 0)
        {
            printf("退出游戏！\n");
            break;
        }
        else
            printf("输入错误，请重新选择！\n");

    } while (input);


    return 0;

}
