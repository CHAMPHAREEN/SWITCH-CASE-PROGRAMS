#include<stdio.h>
main()
{
    char ch;
    printf("ENTER CHARACTER:");
    scanf("%c",&ch);
    switch(ch)
    {
    	case'a':
    	case'e':
    	case'i':
		case'o':
		case'u':
    	case'A':
    	case'E':
		case'I':
		case'O':	
		case'UW':printf("VOWEL");
		         break;
	    default:printf("CONSONANT");
	}
}
