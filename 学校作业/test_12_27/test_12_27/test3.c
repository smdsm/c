#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 4
struct Stu
{
	long num;
	char name[20];
	float score[3];
	float aver;
}stu[N];
int main()
{
	void input(struct Stu stu[]);
	float  aver3(struct Sru stu[]);   //返回所有学生三科平均值 一个数；
	struct Stu  highest(struct Stu stu[]); //返回平均分最高的学生
	struct Stu stu_highest;
	input(stu);
	aver3(stu);
	stu_highest = highest(stu);
	printf("all average is %5.3f \n", aver3(stu));
	printf("the highest student is:\n%ld   %s  %5.3f  %5.3f  %5.3f\n", 
		stu_highest.num, stu_highest.name, stu_highest.score[0], stu_highest.score[1],
		stu_highest.score[2]);

	return 0;
}
void input(struct Stu stu[])
{
	int i;
	printf("input %d students:\n", N);
	for (i = 0; i < N; i++)
	{
		scanf("%ld%s%f%f%f", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].
			score[1], &stu[i].score[2]);
		stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
	}
	printf("over\n");
}
float aver3(struct Stu stu[])
{
	float a, s = 0;
	int i;
	for (i = 0; i < N; i++)
	{
		s = s + stu[i].aver;
	}
	a = s / N;
	return(a);
}
struct Stu  highest(struct Stu stu[])
{
	int i;
	struct Stu highest = stu[0];
	for (i = 0; i < N; i++)
	{
		if (stu[i].aver > highest.aver)
		{
			highest = stu[i];
		}
	}
	return(highest);
}