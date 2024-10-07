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
		printf("\n\n\t----  Matrix Input ----\n\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("Enter a[%d][%d]:",i,j);
				scanf("%d",&a[i][j]);
			}
				printf("\n");
		}

	int r,c;
	int rowsum=0;
	printf("Enter the Num Of Row:");
	scanf("%d",&r);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==r)
			{
				printf("The Element Of Row: %d\n",a[r][j]);
				rowsum+=a[r][j];
			}
		}
		printf("\n");
	}
	
	int colsum=0;
	printf("Enter the Num Of Column:\n");
	scanf("%d",&c);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(j==c)
			{
				printf(" The Element Of Column: %d",a[i][c]);
				colsum+=a[i][c];
			}
		}
		printf("\n");
	}
	printf("\nThe sum Of Column : %d\n",colsum);
	printf("The Sum Of Row : %d\n\n",rowsum);
}
