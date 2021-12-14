#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,d;
	float r1,r2;
	printf("ENTER VALUES FOR a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	d=(b*b-(4*a*c));
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	switch(d>0)
	{ 
	  case 1:printf("ROOTS ARE REAL AND UNEQUAL=%f\n%f",r1,r2);
	               break;
	  case 0:switch(d<0) 
	  {
	  	   case 1:printf("ROOTS ARE IMAGINARY");
		          break; 
		   case 0:printf("ROOTS ARE EQUAL=%f",r1);
		          break;       
				  }          	           
	}	
}
