#include<stdio.h>

 main(){
int a1;
int a2;
int a3;

printf("Enter value of first angle: ");
scanf("%d",&a1);
printf("Enter value of second angle: ");
scanf("%d",&a2);
a3=180-(a1+a2);
printf("The value of third angle is %d",a3);
  
}
