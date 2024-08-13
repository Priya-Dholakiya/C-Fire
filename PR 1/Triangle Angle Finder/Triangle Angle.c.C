#include <stdio.h>
#include <conio.h>

main()
{
	int a;
	int b;
	int c;
	int Ans;

	clrscr();
		  printf("Enter the value of First angle:");
		  scanf("%d",&a);
		  printf("Enter the value of Secound angle:");
		  scanf("%d",&b);
	Ans=180 - (a+b);
		printf("VAlue Of Third Angle 180 - (%d+%d):",a,b);
		printf("%d",Ans);

	getch();
}