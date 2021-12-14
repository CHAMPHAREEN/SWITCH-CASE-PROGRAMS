#include<stdio.h>
main()
{
      int n,r;
	  printf("ENTER NUMBER:");
	  scanf("%d",&n);
	  r=n%2;
	  switch(r)
	  {
	  	case 0:printf("EVEN");
	  		   break;
	    case 1:printf("ODD");
		       break;		   
	  }
}


