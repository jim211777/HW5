#include <stdio.h>
#include<stdlib.h>
void Reverse(char strArray[]);
int main(void)
{
	int i;
	char strArray[30] = "Print this string backward.";
	for (i = 0; i < 30; i++)
	{
		printf("%c", strArray[i]);
	}
	printf("\n");
	Reverse(strArray);
}
void Reverse(char strArray[])
{
	if (strArray[0] == '\0')
	{
		return;
	}
	Reverse(&strArray[1]);
	printf("%c", strArray[0]);
}