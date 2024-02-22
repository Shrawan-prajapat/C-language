#include<stdio.h>

main(){
	int  a,b,i,c=0,arr[c],j;
	
	printf("Enter the strating year: ");
	scanf("%d",&a);
	printf("Enter the ending year: ");
	scanf("%d",&b);
	
	printf("Leap years are: ");
	
	for(i=a;i<b;i++){
		if(i%4==0){
				printf("%d \t",i);
				c++;
		}
	
	}

	arr[c] = i; 
	
	
	for(j=0;j<c+1;j++){
		printf("%d\n",arr[j]);
	}
	
}
