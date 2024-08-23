#include <stdio.h>
#include <conio.h>

main()
{       int a=1,n;

	clrscr();
			printf("Enter Any Number [Natural]\t:");
			scanf("%d",&n);


		while(a <= n)
		{
			if(a%2==0)
			{
				printf("%d\t",a);
			}

			a++;
		}


	getch();
}