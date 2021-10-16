#include<stdio.h>
main()
{
	printf("Enter a number:\n1.\n2.\n3.\n4.\n5.");
	int choice=0;
	scanf("%d",&choice);
	
	switch(choice)
	{
	   case 1:
	        printf("Food item-French Fries.\n Price-Rs99");
		break;
	   case 2:
	    	printf("Food item-Burger.\n Price-Rs129");
	    	break;
	   case 3:	
	        printf("Food item-Sandwich.\n Price-Rs149");
	        break;
	   case 4:	
		printf("Food item-Pasta.\n Price-Rs179");
		break;
	   case 5:	
		printf("Food item-Pizza.\n Price-Rs239");
		break;
	   default : printf("Invalid choice");
	}
}
