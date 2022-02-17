#include<stdio.h>
int main()
{
	int choicecode;
	printf("Pick an item : \n1.Burger,\nRs.129 , \n2.French fries , \nRs.99 , \n3.Pizza , \nRs.239 , \n4.Pasta , \nRs.179 , \n5.Sandwich , \nRs.149. \n");
	scanf("%d",&choicecode);
	
	switch(choicecode)
	{
		case 1:
			printf("You chose Burger.");
			break;
			
		case 2:
			printf("You chose French fries.");
			break;
			
		case 3:
			printf("You chose Pizza.");
			break;
			
		case 4:
			printf("You chose Pasta.");
			break;
			
		case 5:
			printf("You chose Sandwich.");
			break;
			
		default:
			printf("Invalid choice");
	}
}
