#include<stdio.h>
main()
{
	int n;
	printf("ENTER DIGIT[1-9]:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:printf("ODD NUMBER");
		         break;
		case 2:
		case 4:
		case 6:
		case 8:printf("EVEN NUMBER");
		        break;
		default:printf("NOT A VALID DIGIT");			
	}
}
