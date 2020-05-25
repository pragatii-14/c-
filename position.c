#include <stdio.h>
void main()
{
    int num, pos;
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter the position:");
	
	scanf("%d",&pos);
	if((num&(1<<pos))==0)
	{
		int m=1;
	      (num&(1<<pos))=m;
	   printf("tthe set no. is:"&num);
	}
	else
	{
	   int m=0;
	
	 (num&(1<<pos))=m;
	   printf("tthe set no. is:"&num);
	}
	
}
