#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100
typedef struct arraystack
{
	int top;
	int capacity;
	int array[MAX];
}arraystack;

void createstack(arraystack *stack,int cap)
{
	int i;
	stack->top=-1;
	for(i=0; i<cap; i++)
	{
		printf("Enter element : ");
		scanf("%d",&stack->array[stack->top]);
		stack->top += 1;
	}
}

int isfull(arraystack *stack)
{
	if(*stack->array==stack->capacity-1)
		return(1);
	return(0);
}

int isempty(arraystack* stack)
{
	if(stack->top==-1)
		return(1);
	return(0);
}

void push(arraystack* stack, int item)
{
	if (isfull(stack))
		printf("sorry stack is full \n");
	else
	{
		stack->top=stack->top+1;
		stack->array[stack->top]=item;
		printf("the entered value is : %d\n",stack->array[stack->top]);
	}
}

void pop(struct arraystack *stack)	
{
	if(!isempty(stack))
	{
		int x=stack->array[stack->top];
		stack->top=stack->top-1;
		printf("poped element is : %d\n ",x);
	}
	else
		printf("stack is empty");
}

int main()	
{
	arraystack stack;
	int choice,y,z;
	while(1)
	{
		printf("\n-----MENU------\n");
		printf("1.Insertion in stack \n");
		printf("2.Delete from stack \n");
		printf("3.Display \n");
		printf("4.Exit\n")
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			printf("Enter the length of stack");
			scanf("%d",&y);
			createstack(&stack,y);
			printf("enter the element of stack");
			scanf("%d",&z);
			push(&stack,z);
			break;
		case 2:
			pop(&stack);
			break;
		case 3:
			printf("thanq u");
			break;
		case 4:
			push(&stack);
			break;
		case 5:
			printf("Fuck you");
			break;
		default: 
			printf("Bitch please");
		
		}
	}
	getch();
}
