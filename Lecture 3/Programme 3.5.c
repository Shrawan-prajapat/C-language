//Wap to find the Perimeter of the circle..
#include <stdio.h>

main(){
	const float PI=3.14;
	float r,ans;


	printf("Enter the value of radius: ");
	scanf("%f",&r);
	ans=2*PI*r;
	printf("The Perimeter of the circle is %.2f",ans);
}
