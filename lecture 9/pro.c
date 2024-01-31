#include <stdio.h>
 main() {
    int i , n , num1 = 0 , num2 = 1 , ans;

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to:\n");

    for (i = 0; i <= n; i++) {
        printf("%d \t",ans);
        num1=num2;
        num2=ans;
        ans = num1 + num2 ;
    }
}
