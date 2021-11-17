#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ROW 3
#define COL 3




void InitBoard(char board[ROW][COL], int row, int col);//��ʼ������
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
void player_move(char board[ROW][COL], int row, int col);
//��������
void computer_move(char board[ROW][COL], int row, int col);
//�ж���Ӯ�Ĵ��� 

//���Ӯ --��*��

//����Ӯ -- '#��

//ƽ��-- ��Q'

//����-- 'C'

char is_win(char board[ROW][COL], int row, int col);

//�ж��Ƿ�����
int is_full(char board[ROW][COL], int row, int col);


