#include <stdio.h>

main()
{
	int row,col;
	printf("Enter Row:");
	scanf("%d",&row);
	printf("Enter Column:");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	 
	printf("\n\n\t----Array Input----\n\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
			printf("\n");
	}
		printf("\n\n\t---- Original Array Output----\n\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
			printf("\n");
	}
		printf("\n\n\t---- Transpose Array Output----\n\n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d ",a[j][i]);
		}
			printf("\n");
	}
}

