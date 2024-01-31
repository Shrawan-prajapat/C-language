#include<stdio.h>

 main()
{
int languagechoice,servicechoice;

printf("Press 1 for English\n");
printf("Press 2 for Hindi\n") ;
printf("Press 3 for Gujarati\n");
printf("Enter your choice: ");
scanf("%d",&languagechoice);

switch(languagechoice){
    case 1:
	 printf("\nPress 1 for Internet Recharge\n");
	 printf("Press 2 for Top-up Recharge\n");
	 printf("Press 3 for Special Recharge\n");
	 printf("Enter your choice: ");
	 scanf("%d",&servicechoice);
switch(servicechoice){
    case 1:
	 printf("\nYou have successfully done Internet Recharge.\n");
	 break;
    case 2:
	 printf("\nYou have successfully done Top-up Recharge.\n");
	 break;
    case 3:
	 printf("\nYou have successfully done Special Recharge.\n");
	 break;
    default:
	 printf("\nEnter a valid choice.\n");
    }
	 break;
    case 2:
	 printf("\nInternet Recharge ke liye 1 dabaiye\n");
	 printf("Top-up Recharge ke liye 2 dabiye\n");
	 printf("Special Recharge ke liye 3 dabiye\n");
	 printf("Enter your choice: ");
	 scanf("%d",&servicechoice);

switch(servicechoice)  {
    case 1:
	 printf("\nAapne safaltapurvak Internet recharge kar liya hai.\n");
	 break;
    case 2:
	 printf("\nAapne safaltapurvak Top-up recharge kar liya hai.\n") ;
	 break;
    case 3:
	 printf("\nAapne safaltapurvak Special recharge kar liya hai.\n") ;
	 break;
       default:
	 printf("\nEnter a valid choice.\n");
    }
	 break;
    case 3:
	 printf("\nInternet Recharge mate 1 dabavo\n");
	 printf("Top-up Recharge mate 2 dabavo\n");
	 printf("Special Recharge mate 3 dabavo\n");
	 printf("Enter your choice:");
	 scanf("%d",&servicechoice);

switch(servicechoice){
     case 1:
	 printf("\nTame safaltapurvak Internet Recharge karyu chho.\n");
	  break;
     case 2:
	 printf("\nTame safaltapurvak Top-Recharge karyu chho.\n");
	  break;
     case 3:
	 printf("\nTame safaltapurvak Special Recharge karyu chho.\n");
	  break;
       default:
	 printf("\nEnter a valid choice.\n");
	    }
	  break;
	     default:
	 printf("\nEnter a valid choice.\n");
     }
 
     }

