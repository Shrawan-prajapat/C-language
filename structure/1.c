#include<stdio.h>

struct student{
		int id;
		char carName[50];
		char carcolor[50];
	};

main(){
	struct student c1;
	
	c1.id =1;
	strcpy(c1.carName ,"Shrawan Prajapat");
	strcpy(c1.carcolor ,"Black");
	
	struct student c2;
	
	c2.id =2;
	strcpy(c2.carName ,"Keyur Vora");
	strcpy(c2.carcolor ,"Black");
	
	struct student 3;
	
	c3.id =3;
	strcpy(c3.carName ,"Pratham Pimple");
	strcpy(c3.carcolor ,"Black");
	
	struct student c2;
	
	c4.id =2;
	strcpy(c2.carName ," Rohit Prajapati");
	strcpy(c2.carcolor ,"Black");
	
	struct student c2;
	
	c2.id =2;
	strcpy(c2.carName ,"Keyur Vora");
	strcpy(c2.carcolor ,"Black");
	
	struct student c2;
	
	c2.id =2;
	strcpy(c2.carName ,"Keyur Vora");
	strcpy(c2.carcolor ,"Black");
	
	
	printf("No: %d",c1.id);
	printf("\nName: %s",c1.carName);
	printf("\n\nNo: %d",c2.id);
	printf("\nName: %s",c2.carName);
	
	
}
