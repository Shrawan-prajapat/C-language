#include<stdio.h>

main(){
	int a,b,c,d,e,f;
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
	
	printf("Enter the number f: ");
	scanf("%d",&f);
	if (a < b) {
        if (a < c) {
            if (a < d) {
                if (a < e) {
                    if (a < f) {
                         printf("\na is minimum number");
                    } else {
                         printf("\nf is minimum number");
                    }
                } else {
                    if (e < f) {
                        printf("\ne is minimum number");
                    } else {
                         printf("\nf is minimum number");
                    }
                }
            } else {
                if (d < e) {
                    if (d < f) {
                         printf("\nd is minimum number");
                    } else {
                        printf("\nf is minimum number");
                    }
                } else {
                    if (e < f) {
                         printf("\ne is minimum number");
                    } else {
                         printf("\nf is minimum number");
                    }
                }
            }
        } else {
            if (c < d) {
                if (c < e) {
                    if (c < f) {
                         printf("\nc is minimum number");
                    } else {
                         printf("\nf is minimum number");
                    }
                } else {
                    if (e < f) {
                        printf("\ne is minimum number");
                    } else {
                        printf("\nf is minimum number");
                    }
                }
            } else {
                if (d < e) {
                    if (d < f) {
                         printf("\nd is minimum number");
                    } else {
                        printf("\nf is minimum number");
                    }
                } else {
                    if (e < f) {
                         printf("\ne is minimum number");
                    } else {
                         printf("\nf is minimum number");
                    }
                }
            }
        }
    } else {
        if (b < c) {
            if (b < d) {
                if (b < e) {
                    if (b < f) {
                         printf("\nb is minimum number");
                    } else {
                        printf("\nf is minimum number");
                    }
                } else {
                    if (e < f) {
                         printf("\ne is minimum number");
                    } else {
                         printf("\nf is minimum number");
                    }
                }
            } else {
                if (d < e) {
                    if (d < f) {
                       printf("\nd is minimum number");
                    } else {
                       printf("\nf is minimum number");
                    }
                } else {
                    if (e < f) {
                        printf("\ne is minimum number");
                    } else {
                       printf("\nf is minimum number");
                    }
                }
            }
        } else {
            if (c < d) {
                if (c < e) {
                    if (c < f) {
                        printf("\nc is minimum number");
                    } else {
                       printf("\nf is minimum number");
                    }
                } else {
                    if (e < f) {
                        printf("\ne is minimum number");
                    } else {
                       printf("\nf is minimum number");
                    }
                }
            } else {
                if (d < e) {
                    if (d < f) {
                        printf("\nd is minimum number");
                    } else {
                       printf("\nf is minimum number");
                    }
                } else {
                    if (e < f) {
                       printf("\ne is minimum number");
                    } else {
                       printf("\nf is minimum number");
                    }
                }
            }
        }
    }
}
