#include<stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int add(int a,int b)
{
	int x=a+b;
	printf("addition is %d\n",x);
	return 0;
}
int sub(int a,int b)
{
	int x=a-b;
	printf("subtraction is %d\n",x);
	return 0;
}
int mul(int a,int b)
{
	int x=a*b;
	printf("multiplication is %d\n",x);
	return 0;
}
int div(int a,int b)
{
	int x=a/b;
	printf("division is %d\n",x);
	return 0;
}

main()
{
	int a,b,ch;
	printf("......Menu......\n");
	
	printf("1.addition\n");
	printf("2.subtraction\n");
	printf("3.multiplication\n");
	printf("4.division\n");
	printf("enter your choice\n");
	scanf("%d",&ch);
	printf("enter value of a\n");
	scanf("%d",&a);
	printf("enter value of b\n");
	scanf("%d",&b);
	
	
	switch(ch)
	{
		case 1: add(a,b);
		break;
		
		case 2: sub(a,b);
		break;
		
		case 3: mul(a,b);
		break;
		
		case 4: div(a,b);
		break;
		
		default: printf("invalid choice!!\n");
	}
}
	
