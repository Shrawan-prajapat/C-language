#include<stdio.h>

void loop_1(int size,int i,int arr[i]){
for(i=0;i<size;i++){
printf("enter elemant here : ");
scanf("%d",&arr[i]);
}
}

void loop_2(int size , int i , int temp , int arr[i] , int arr[size]){
for(i=0; i<size / 2; i++){
temp = arr[i];
arr[i] = arr[size-1-i];
arr[size]=temp;	
}
}

void loop_3(int arr[i],int size,int i){
for(i=0;i<size;i++){
printf("%d\t",arr[i]);
}
}

void main(){



printf("enter the size here : ");
scanf("%d",&size);

int arr[size];

loop_1(size,i,arr[i]);

loop_2(size,i,temp,arr[i],arr[size]);

loop_3(arr[i],size,i);

}0
