#include<stdio.h>
#include<conio.h>

int main()
{
	 int a, b;
	 printf("Enter value of a: ");
	 scanf("%d", &a);
	 printf("Enter value of b: ");
	 scanf("%d", &b);
	 printf("Before swapping: a = %d and b = %d\n", a, b);
	 a = a + b;
	 b = a - b;
	 a = a - b;
	 printf("After swapping: a = %d and b = %d", a, b);
	 getch();
	 return(0);
}
