#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	unsigned int dice1, dice2, value;
	unsigned int array[13] = { 0 };
	srand(time(0));
	printf("  點數             次數   \n");
	for (int i = 1; i <= 36000; i++)
	{
		dice1 = 1 + rand() % 6;
		dice2 = 1 + rand() % 6;
		value = dice1 + dice2;
		array[value]++;
	}
	for (int i = 2; i <= 12; i++)
	{
		printf("%-2d%20d\n", i, array[i]);
	}
	system("pause");
	return 0;
}
