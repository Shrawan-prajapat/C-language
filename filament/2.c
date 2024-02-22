#include<stdio.h>

 main(){
	char str[50];
	int legnth=0,i,j,n[50] = {0};
	
	printf("Enter the number: ");
	gets(str);
	
	legnth=strlen(str);
	
	printf("lennth is %d\n",legnth);
	
	for(i=0;i < legnth;i++){
		for(j=0;j<legnth;j++){
			if(str[i]==str[j]){
				n[i]++;
			}
		}
	}
	
	for(i=0;i < legnth;i++){
	if(n[i]!=0){
		printf("%c = %d\n",str[i],n[i]);
		n[i]++;
	}
	}
	
}
