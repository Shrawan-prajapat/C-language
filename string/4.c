#include<stdio.h>

main(){
	
	int i,sum=0;
	char name[20];
	
	printf("Enter Your name: ");
	scanf("%s",&name);
	
	for(i=0;name[i]!='\0';i++){
		printf("\nThe Ascci value of %d and %c. ",name[i],name[i]);
		sum=sum+name[i];
	}
	printf("\n The sum of assci value is %d ",sum);
	
}
