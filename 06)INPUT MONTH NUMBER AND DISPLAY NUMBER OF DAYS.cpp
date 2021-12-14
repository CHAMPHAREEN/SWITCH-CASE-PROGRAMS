#include<stdio.h>
main()
{
	int mn;
	printf("ENTER MONTH NUMBER:");
	scanf("%d",&mn);
	switch(mn)
	{
		case 1:
	    case 3:
	    case 5:
	    case 7:
	    case 8:
	    case 10:
		case 12:printf("THERE ARE 31 DAYS IN THE MONTH");
		            break;
		case 4:
		case 6:
	    case 9:
	    case 11:printf("THERE ARE 30 DAYS IN THE MONTH");
		            break;	
	    case 2:printf("THERE ARE 28/29 DAYS IN THE MONTH");
		default:printf("INVALID MONTH");				
	}
}
