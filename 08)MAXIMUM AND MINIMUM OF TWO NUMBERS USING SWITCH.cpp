#include<stdio.h>
main()
{
	int a,b,max;
	printf("ENTER TWO NUMBERS:");
	scanf("%d%d",&a,&b);
	max=a>b;
	switch(max)
	{
		case 0:printf("MAXIMUM=%d",b);
		       printf("\nMINIMUM=%d",a);
		          break;
		case 1:printf("MAXIMUM=%d",a);
		       printf("\nMINIMUM=%d",b);
		          break;          
	}
	
	
}
