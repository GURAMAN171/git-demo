#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
int arr[MAX];
int rear=-1;
int front=-1;
void insert(int item);
int del();
int peek();
void display();
int isEmpty();
int isFull();
main()
{
	int choice,item;
	while(1)
	{
		printf("\n------------SELECT YOUR OPTION------------\n");
			printf("\n-----------Change in DEVELOP BRANCH------------\n");
		printf("1.INSERT\n");
		printf("2.DELETE\n");
		printf("3.DISPLAY ELEMENT AT THE FRONT\n");
		printf("4.DISPLAY ALL THE ELEMENTS IN QUEUE\n");
		printf("5.QUIT\n");
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Input the element for adding in the queue : ");
				scanf("%d",&item);
				insert(item);
				printf("-----------------ELEMENT PUT IS : %d-------------- \n",item);
				break;
			case 2:
				item=del();
				printf("----------------DELETED ELEMENT IS %d------------\n",item);
				break;
			case 3:
				printf("---------------Element at the front is %d--------------\n ",peek());
				break;
			case 4:
				display();
				break;
			case 5:
				exit(1);
		    default:
		    	printf("WRONG CHOICE");
		}
	}
}
void insert(int item)
{
	if(isFull())
	{
		printf("QUEUE OVERFLOW");
		return;
	}
	if(front==-1)
	front=0;
	rear=rear+1;
	arr[rear]=item;
}
int del()
{
	int item;
	if(isEmpty())
	{
		printf("QUEUE IS UNDERFLOW");
		exit(1);
	}
	item=arr[front];
	front=front+1;
	return item;
}
int peek()
{
	if(isEmpty())
	{
		printf("QUEUE IS UNDERFLOW");
		exit(1);
	}
	return arr[front];
}
int isEmpty()
{
	if(front==-1)
	return 1;
	else
	return 0;
}
int isFull()
{
	if(rear==MAX-1)
	return 1;
	else 
	return 0;
}
void display()
{
	int i;
	if(isEmpty())
	{
		printf("QUEUE is EMPTY");
		return;
	}
	printf("QUEUE IS : ");
	for(i=front;i<=rear;i++)
	printf("%d\t",arr[i]);
}
