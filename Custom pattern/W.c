#include <stdio.h>
main()
{
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==6 && j==3)
			{
				printf(" ");
				continue;
			}
			else if(j==1 || j==5 || i==6 || (i==5 && j==3))
			 	printf("*");
			 
			else 
				printf(" ");
		}
		printf("\n");
	}
	
	
}
