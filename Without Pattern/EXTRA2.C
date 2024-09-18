#include <stdio.h>
#include <conio.h>

main()
{
	int i,j;

	clrscr();
		for(i=1;i<=5;i++)
		{
		  for(j=i;j<=5;j++)
		  {
			if(j==2)
			{
			       printf("B");
			}
			else if(j==4)
			{
			       printf("D");
			}
			else
			{
			       printf("%d",j);
			}
		  }
			printf("\n");
		}

	getch();
}