#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int chk(char* count)
{
	int i = 0;
	while (count[i] != '\0')
	{
		i++;
	}
	return i;
}

void chk1(char* text)
{	int i;
	int j;
	for (i = 0; i < chk(text); i++)
	{
		if (text[i+1] == text[i])
		{
			for (j = i; text[j] == text[i]; j++)
				printf("%c", text[j]);
			i = j-1;
		}
	}
}

int main()
{
	char text[1000];
	scanf("%[^\n]s", text);
	chk1(text);
	return 0;
}