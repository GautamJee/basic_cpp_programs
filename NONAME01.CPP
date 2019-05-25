#include <stdio.h>
#include <conio.h>
void main()
{
void *reverse (char *str);
char *str;
clrscr();
printf("\n string: ");
gets(str);
printf("%s",reverse(str));
getch();
}
void *reverse(char *str)
{
char *s,*e,*t;
for (s=str;*(str+1)!=0;str++);
e=str;
str=s;

for ( ;*str<=*e;*e--,*str++)

{
*t=*str;
*str=*e;
*e=*t;
}
return (s);
}