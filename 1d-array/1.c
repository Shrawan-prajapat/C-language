#include<stdio.h>

main()
{
	int a,i,sum=0,sub,multi,divide;
	
	printf("Enter the size of elements: ");
	scanf("%d",&a);
	int array[a];
	for(i=0;i<a;i++){
		printf("array[%d]: ",i);
		scanf("%d",&array[i]);
		
	}
		for(i=0;i<a;i++){
	
		printf("%d\n",array[i]);
		sum+=array[i];
		sub-=array[i];
	}
	
    sub = array[0];
    for ( i = 1; i < a; i++) {
        sub-= array[i];
    }
    multi= array[0];
    for ( i = 1; i < a; i++) {
        multi*= array[i];
    }
    divide= array[0];
    for ( i = 1; i < a; i++) {
        divide/= array[i];
    }
		printf("The Sum is %d\n",sum);
		printf("The Substraction is %d\n",sub);
		printf("The Multiplication is %d\n",multi);
		printf("The Division is %d\n",divide);
	
}
