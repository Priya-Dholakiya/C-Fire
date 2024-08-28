#include <stdio.h>
#include <conio.h>

main()
{
	int ns;

	clrscr();
		printf("Enter Any Digit : ");
		scanf("%d",&ns);
		if(ns<0)
		{
			printf("Your Value is nagative...");
		}
		else if(ns>0)
		{
			printf("Your value is positive...");
		}
		else
		{
			printf("Your value is natural...");
		}

	getch();
}