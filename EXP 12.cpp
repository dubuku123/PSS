#include <stdio.h>
 
int main()
{
  	int Number, Reminder, Product;
 
  	printf("\n Please Enter any Number that you wish  : ");
  	scanf("%d", & Number);
  	 	
  	for(Product = 1; Number > 0; Number = Number / 10)
  	{
  		Reminder = Number % 10;
		Product = Product * Reminder;
	}
  
	printf(" \n The Product of Digits of a Given Number =  %d", Product);
 
  	return 0;
}