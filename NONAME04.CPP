// To concatinate two strings


#include <conio.h>
#include <stdio.h>
void main()
{
	char *concatinate(char *, char *);
	char *str1, *str2;
	printf("enter first string");
	gets(str1);
	printf("enter second string");
	gets(str2);
	printf("resulting string is: %s",concatinate(*str1, *str2);
	getch();
}

char concatinate(char *str1, char *str2)

{
	char *s;
	for(s=str1;*str1!=0; str1++)
	{
		for( ;str2!=0;str2++,str1++)

