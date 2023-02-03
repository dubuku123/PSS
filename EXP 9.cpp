#include <stdio.h>
int main()
{
  int i,num;
  printf("\n Please Enter the Maximum num Value : ");
  scanf("%d", &num);
  printf("Even numbers in the list are : ");
  for(i = 1; i <= num; i++)
  {
  	if ( i%2 == 0 ) 
  	{
        printf("%d \t",i);
  	}
  }
}
