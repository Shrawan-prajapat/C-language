#include<stdio.h>
main()
{
int i,len,upr=0,lwr=0,num=0,spe=0;

char password[10];
char email[20];

printf("Enter your email-id: ");
gets(email);

printf("Enter your password :");
gets(password);

len = strlen(password);

for(i=0;i<=len;i++){
if (password[i]>=65 && password[i]<=90)upr++;
if (password[i]>=97 && password[i]<=122)lwr++;
if (password[i]>=48 && password[i]<=57)num++;
if (password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='_')spe++;
}

if(upr>0 && num>0 && lwr>0 && spe>0){
printf("Your Password is Strong.");
}
else{
printf("Your Password is Weak.");
}
}
