#include<stdio.h>
void main()
{
	int a;
	printf("enter a no.");
	scanf("%d",&a);
	if(a<=-1)
	printf("the no is a negative one");
	
	if (a>=1)
	printf("the no is a positive one");
	else if(a==0)
	printf("zero");
	
}

