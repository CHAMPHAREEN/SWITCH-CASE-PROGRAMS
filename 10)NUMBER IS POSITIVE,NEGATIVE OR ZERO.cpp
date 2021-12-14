#include<stdio.h>
main()
{
	int num;
	printf("ENTER NUMBER:");
	scanf("%d",&num);
	switch(num>0)
	{
		case 1:printf("POSITIVE");
		         break;
		case 0:switch(num<0)
		{  
		   case 1:printf("NEGATIVE");
		           break;
		   case 0:printf("ZERO");			          
	}
  }
}
