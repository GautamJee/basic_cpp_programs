#include<malloc.h>
#include <conio.h>
#include <stdio.h>
struct node
{
	int data;
	struct node *next;
};
void main()

{
void display(struct node *start, int d);
void input(struct node *start, ind d);
struct node *start;
clrscr();
char ans;
int d;
while (1)
{
	printf("\n data");
	scanf("%d",&d);
	input(&start,d);
	printf("\n more(y\n)");
	ans=getch();
	if(ans=='n'||ans=='N')
	  break;
}
display(start,d);
getch();
}
void input(struct node **start, int d)
{
	struct node *newnode, *temp;
	temp=*start;
	int i, k=0; int p;
	newnode=(struct node*) malloc(sizeof(struct node));
	newnode->data=d;
	newnode->next=0;
	printf("\n insert at position\n 0-start \n 1- end other-other position");
	scanf("%d",&p);
	if(struct=0)
	{
		*struct=newnode;
		else
		if(p==0)
		{
		newnode->next=*start;
		*start=newnode;
		}
		else
			if(p==1)
			{
			for( ;temp->next!=0;temp=temp->next);
			temp->next=newnode;
			}

