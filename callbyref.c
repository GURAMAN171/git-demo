#include<stdio.h>
#include<conio.h>
void ref(int *x,int *y);
void main()
{
	int a=5,b=8;
	printf("BEFORE CALLING FUNCTION a=%d\nb=%d",a,b);
	ref(&a,&b);
	printf("AFTER CALLING FUNCTION a=%d\nb=%d",a,b);
}

void ref(int *x,int *y)
{ 
(*x)++;
(*y)++;
printf("Inside function *x=%d,*y=%d\n",*x,*y);
}

//call by value will not changethe value of actual arguments
