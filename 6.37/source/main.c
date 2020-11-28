#include<stdio.h>
#include<stdlib.h>
int maxnum(int array);
int main(void)
{
	int array[3] = { 10,3,15 };
	printf("%d", maxnum(array, 0, 3));
	system("pause");
	return 0;
}
int  maxnum(int array[], int i, int l)
{
	if (i >= l)return -99999;
	return (array[i] > maxnum(array, i + 1, l) ? array[i] : maxnum(array, i + 1, l));
	/*
	int max=array[0];
	for (int i = 0; i <3; i++)
	{
			if (array[i] >max )
			{

				max = array[i];
			}
	}
	printf("%d\n", max);
	return  max
	*/
}