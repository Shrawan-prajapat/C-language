#include<stdio.h>

main(){
 int i = 10;
    int result = 0;

    printf("Printing 10 to 1:\n");
    while (i >= 1) {
        printf("%d ", i);
        result -= i;
        i--;
    }

    printf("\n\nSubtraction of all numbers: %d\n", result);
	
}
