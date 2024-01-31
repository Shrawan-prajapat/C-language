#include<stdio.h>

main()
{
	char s='a';
	
	do{
		
		printf("%c",s);
		s+=4;
	}while(s<='z');
}
