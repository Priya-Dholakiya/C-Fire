#include <stdio.h>
main()
{
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=6;j++)
		{
			if((i==1 && j==1) || (i==1 && j==6) || (i==7 && j==1) || (i==1 && j==5) ||(i==7 && j==5) || (i==6 && j==5)){
				printf(" ");
			}
			else if(j==1 || i==1 || j==5 || (j==6 && i==7) || (j==4 && i==6) || (j==3 && i==5) || (i==7 && j==2) || (j==3 && i==7)) 
				printf("*");
			
			else 
				printf(" ");
		}
				printf("\n");
	}
	
	
}
