#include <stdio.h>
#include <conio.h>

main()
{
	int x;
	int y;
	int Ans;

	clrscr();

		 printf("Enter the value of x:");
		 scanf("%d",&x);
		 printf("Enter the value of y:");
		 scanf("%d",&y);

	Ans=(x+y)*(x+y)*(x+y);

		printf("Youe Answer is:%d",Ans);

	getch();
}