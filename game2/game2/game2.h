#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 11
#define COL 11
#define EASY_COUNT 80

void InitBoard(char board[ROW][COL],int row,int col,char set);

void DisplayBoard(char board[ROW][COL], int row, int col);

void SetMine(char mine[ROW][COL], int row, int col);

void FindMine(char mine[ROW][COL], char show[ROW][COL], int row, int col);

int get_mine_count(char mine[ROW][COL], int x, int y);




