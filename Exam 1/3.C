#include <stdio.h>
#include <conio.h>

main()
{
	int i=0,n,sum=0;

	clrscr();
		printf("Enter Any Natural Number :");
		scanf("%d",&n);

		do
		{
			if(i%2!=0)
			{
			  sum+=i;

			}
			i++;


		}while(i<=n);

		printf("Sum Of all odd Number between 1 to %d:%d\n",n,sum);



	getch();
}
