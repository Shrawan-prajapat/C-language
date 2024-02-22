
#include<stdio.h>
void main(){
	int n;
	int a[n];
	int i,sum;
	printf("Enter the size of elements: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
			
	}
	printf("The Squre are: ");
        printf("%d", a[i] * a[i]);
        if (i != 4) {
            printf(", ");
        }
		for (i=0;i<n;i++) {
        
        printf("\n");
    }
	
}

