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
		printf("ENter the value of y:");
		scanf("%d",&y);

	Ans=(x+y)*4;

		printf("Your Answer is :%d",Ans);

	getch();
}