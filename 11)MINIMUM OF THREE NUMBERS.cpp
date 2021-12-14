#include<stdio.h>
main()
{
    int a,b,c;
	printf("ENTER THREE NUMBERS:");
	scanf("%d%d%d",&a,&b,&c);
	switch(a<b&&a<c)
	{
		 case 1:printf("%d IS MINIMUM",a);
		         break;
		 case 0:switch(b<c&&b<a)
		 {
		 	 case 1:printf("%d IS MINIMUM",b);
		 	          break;
		 	 case 0:printf("%d IS MINIMUM",c);         
				}       
		}	
}

