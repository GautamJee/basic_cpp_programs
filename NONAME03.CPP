#include<conio.h>
#include<stdio.h>
void count_str(char str[100], char sub_str[30])
{
int c=0,i,j=0;
for (i=0;str[i]!=0;i++)
{
if(str[j]==0)
c++;
if (str[i]==sub_str[j])
j++;
else
j=0;
}

printf("%d",c);
}
void main()
{
char s[100],s_s[30];
printf("enter string and substring");
gets(s);
gets(s_s);
count_str(s,s_s);
getch();
}