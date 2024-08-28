#include <stdio.h>
#include <conio.h>

main()
{
	int b,h;
	int Ans;

	clrscr();
		printf("Enter the value of Wigth\t:");
		scanf("%d",&b);
		printf("Enter the value of Height\t:");
		scanf("%d",&h);

	Ans=(b*h)/2;
		printf("Your Ans is\t:%d",Ans);


	getch();
}