#include <stdio.h>
#include <conio.h>

main()
{       int x,y;

	clrscr();
			printf("Enter First Year [Natural]\t:");
			scanf("%d",&x);
			printf("Enter Secound Year [Natural]\t:");
			scanf("%d",&y);


		while(x <= y)
		{
			if(x%4==0)
			{
				printf("%d\t",x);
			}

			x++;
		}


	getch();
}