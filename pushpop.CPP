#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 50
int stack[MAX];
int push;
int pop;
int main()
{
int choice,i,top=-1,item,dlt;
clrscr();
while(1)
{
printf("enter your choice\n");
printf("press 1: for push\n");
printf("press 2: for pop\n");
printf("press 3: for exit program\n");
scanf("%d", &choice);

switch(choice)
{
	case 1:

		if(top >= MAX)
		{
		printf("stack is overflow");
		exit (0);
		}
		top++;

		printf("enter value:\n");
		scanf("%d", &item);
		stack[top] = item;
		printf("data pushed to stack\n");


		break;

	case 2:
		if (top == -1)
		{
		printf("stack is empty\n");
		exit(0);
		}

		dlt = stack[top];
		top--;
		break;

	case 3:
		printf("program exit\n");
		exit(0);
		break;
	default:
		printf("invalid choice");
	}
	printf("\n");
	}
	return 0;
	}

