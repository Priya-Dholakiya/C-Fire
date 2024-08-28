#include <stdio.h>
#include <conio.h>

main()
{
	float PI=3.14;
	float Ans;
	int r;

	clrscr();
		printf("Enter the value of r :");
		scanf("%d",&r);

	Ans=PI*r*r;
		printf("Your Answer is :%.2f",Ans);


	getch();
}
