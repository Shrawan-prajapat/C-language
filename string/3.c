#include<stdio.h>

main(){
	
	int i,sum=0;
	char name[20];
	
	printf("Enter the String : ");
	scanf("%s",&name);
	
	for(i=0;name[i]!='\0';i++){
		if(name[i]>='A' && name[i]<='Z'){
		name[i]	=name[i] + 32;	
		}
		else if(name[i]>='a' && name[i]<='z'){
			name[i]	=name[i] - 32;
		}
	}
	printf("%s\n", name);
}
