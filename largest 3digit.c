#include <stdio.h>
void main()
{
	int n1,n2,n3;
printf("enter 1st no.:");
scanf("%d",&n1);
printf("enter 2nd no.:");
scanf("%d",&n2);
printf("enter 3rd no.:");
scanf("%d",&n3);
 if(n1==n2)
 {
 	if(n1==n3)
 	printf("all nos are equal");
 }
 if( n1>n2)
 {
 	if(n1>n3)
 	printf("n1 is the largest num");
 }
 else if(n2>n1)
 {
 	if(n2>n3)
 	printf("n2 is largest num");
 }
 else if(n3>n1)
 {
 	if(n3>n2)
	 printf("n3 is largest");
	 
 }
 	
 }
 


