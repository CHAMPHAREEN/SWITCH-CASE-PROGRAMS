#include<stdio.h>
main()
{
	int a,b,sum,sub,product,remainder;
	float quotient;
	char ch;
	printf("ENTER OPERATOR:");
	scanf("%c",&ch);
	printf("ENTER TWO NUMBERS:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	product=a*b;
	quotient=float(a/b);
	remainder=a%b;
	switch(ch)
	{
		case '+':printf("SUM=%d",sum);
		           break;
		case '-':printf("DIFFERENCE=%d",sub);
		           break; 
		case '*':printf("PRODUCT=%d",product);
		           break; 	
		case '/':printf("QUOTIENT=%f",quotient);
		           break; 	
		case '%':printf("REMAINDER=%d",remainder);
		           break; 		             
	}
}
