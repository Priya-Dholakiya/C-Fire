#include <stdio.h>
#include <conio.h>

main()
{
	int i,j,k='A';

	clrscr();
		for(i='A';i<='E';i++)
		{
		  for(j='A';j<=i;j++)
		  {
			printf("%c",k++);
		  }
			printf("\n");
		}

	getch();
}