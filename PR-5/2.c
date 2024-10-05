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
	int max=a[0][0];
		printf("\n\n\t----Array Output----\n\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]>max)
			max=a[i][j];
		}
			printf("\n");
	}
			printf("The Maximum Value is: %d",max);
	
}
