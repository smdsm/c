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
    //��ȡ�����
    rnd = rand() % 100 + 1;
    //��ʼ������
    while (1)
    {
        scanf("%d", &guess);
        if (guess > rnd)
        {
            printf("�´���!\n");

        }
        else if (guess < rnd)
        {
            printf("��С��!\n");
        }
        else
        {
            printf("��ϲ���¶���!,\n");
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
        //��ʼ��
        chushihua();

        //��ȡѡ�񣬴洢��input��
        scanf("%d", &input);


        if (input == 1)//�ж��ǿ�ʼ��Ϸ�������˳���Ϸ
        {
            printf("��ʼ��Ϸ,���������֣�\n");
            play();
        }
        else if (input == 0)
        {
            printf("�˳���Ϸ��\n");
            break;
        }
        else
            printf("�������������ѡ��\n");

    } while (input);


    return 0;

}
