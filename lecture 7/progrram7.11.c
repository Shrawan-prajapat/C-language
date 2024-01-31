#include<stdio.h>

 main()
{
int choice,servicechoice;

printf("Press 1 for Pizza\n");
printf("Press 2 for Pasta\n") ;
printf("Press 3 for Burger\n");
printf("Enter your choice: ");
scanf("%d",&choice);
switch(choice){
    case 1:
	 	printf("\nPress 1 for Greek pizza\n");
	 printf("Press 2 for Detroit pizza\n");
	 printf("Press 3 for Margherita\n");
	 printf("Enter your choice: ");
	 scanf("%d",&servicechoice);
switch(servicechoice){
    case 1:
	
	printf("\nYou have successfully ordered Greek pizza.\n");
	 break;
    case 2:
	 printf("\nYou have successfully ordered Detroit pizza.\n");
	 break;
    case 3:
	 printf("\nYou have successfully ordered Margherita pizza.\n");
	 break;
    default:
	 printf("\nEnter a valid choice.\n");
    }
	 break;
    case 2:
	printf("\nPress 1 for Orzo Pasta\n");
	 printf("Press 2 for Pappardelle Pasta\n");
	 printf("Press 3 for Rigatoni Pasta\n");
	 printf("Enter your choice: ");
	 scanf("%d",&servicechoice);

switch(servicechoice)  {
    case 1:
	  printf("\nYou have successfully ordered Orzo Pasta.\n");
	 break;
    case 2:
	 printf("\nYou have successfully ordered Pappardelle Pasta.\n");
	 break;
    case 3:
	 printf("\nYou have successfully ordered Rigatoni Pasta.\n");
	 break;
       default:
	 printf("\nEnter a valid choice.\n");
    }
	 break;
    case 3:
	printf("\nPress 1 for Bacon Burger\n");
	 printf("Press 2 for Cheese Burger\n");
	 printf("Press 3 for Chicken Burger\n");
	 printf("Enter your choice: ");
	 scanf("%d",&servicechoice);

switch(servicechoice){
     case 1:
	 printf("\nYou have successfully ordered Bacon Burger.\n");
	  break;
     case 2:
	 printf("\nYou have successfully ordered Cheese Burger.\n");
	  break;
     case 3:
	 printf("\nYou have successfully ordered Chicken Burger.\n");
	  break;
       default:
	 printf("\nEnter a valid choice.\n");
	    }
	  break;
	     default:
	 printf("\nEnter a valid choice.\n");
     }
 
     }

