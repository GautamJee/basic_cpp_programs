//program to delete a specified location in an array

#define s 20
#include <conio.h>
#include <stdio.h>
#include<string.h>
void main()
{
	char employ[s][s];
	int delete_array(char employ[s][s],int ,int ,char*);
	void input(char employ[s][s],int);
	void display(char employ[s][s],int);
	int number,position;
	char element[s];
	clrscr();
	printf("\n Input the no of element in the array:");
	scanf("%d",&number);
	input(employ,number);
	printf("\n Entered list is as follows: \n");
	display(employ,number);
	fflush(stdin);
	printf("\n Input the position from where you want to delete an element");
	scanf("%d",&position);
	number=delete_array(employ,number,position,element);
	display(employ,number);
	getch();
}

void input(char employ[s][s],int number)
{
int i;
for (i=0; i<number;i++)
{
fflush(stdin);
printf("\n Input data for %d",i+1);
gets(employ[i]);
}
}

void display(char employ[s][s],int number)
{
int i;
for (i=0; i<number;i++)
{
printf("\n Value of the position %d %s",i+1,employ[i]);
}
}

int delete_array(char employ[s][s],int number,int position,char element[])
{
int temp=position-1;
element=employ[position-1];
printf("\n Information which we have to delete:%s",element);
while(temp<=number+1)
{
strcpy(employ[temp],employ[temp+1]);
temp++;
}
number--;
return(number);
}