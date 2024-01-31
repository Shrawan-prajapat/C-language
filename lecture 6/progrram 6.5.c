//Write programme to find maximum in 5 number  
#include<stdio.h>

main(){
	int a,b,c,d,e;
	
	printf("Enter the number a: ");
	scanf("%d",&a);
	
	printf("Enter the number b: ");
	scanf("%d",&b);
	
	printf("Enter the number c: ");
	scanf("%d",&c);
	
	printf("Enter the number d: ");
	scanf("%d",&d);
	
	printf("Enter the number e: ");
	scanf("%d",&e);
	
if (a > b) {
        if (a > c) {
            if (a > d) {
                if (a > e) {
                   printf("\na is maximum number");
                } else {
                   printf("\ne is maximum number");
                }
            } else {
                if (d > e) {
                    printf("\nd is maximum number");
                } else {
                    printf("\ne is maximum number");
                }
            }
        } else {
            if (c > d) {
                if (c > e) {
                    printf("\nc is maximum number");
                } else {
                    printf("\ne is maximum number");
                }
            } else {
                if (d > e) {
                    printf("\nd is maximum number");
                } else {
                    printf("\ne is maximum number");
                }
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                if (b > e) {
                   printf("\nb is maximum number");
                } else {
                    printf("\ne is maximum number");
                }
            } else {
                if (d > e) {
                    printf("\nd is maximum number");
                } else {
                   printf("\ne is maximum number");
                }
            }
        } else {
            if (c > d) {
                if (c > e) {
                    printf("\nc is maximum number");
                } else {
                    printf("\ne is maximum number");
                }
            } else {
                if (d > e) {
                    printf("\nd is maximum number");
                } else {
                    printf("\ne is maximum number");
                }
            }
        }
    }
}
