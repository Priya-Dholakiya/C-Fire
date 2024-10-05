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
		printf("\n\n\t---- Original Matrix Output ----\n\n");	
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d ",a[i][j]);
			}
				printf("\n");
		}
		int rowsum=0;
		int r1,c1;
		int colsum=0;
		printf("Enetr the num of Row:");
		scanf("%d",&r1);
		printf("Enter the num of Column");
		scanf("%d",&c1);
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				rowsum=rowsum+a[i][j];
			}
			printf("\n");
		}
		printf("Sum of the elements in row %d is %d \n ", i, rowsum);
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				colsum=colsum+a[j][i];
			}
			printf("\n");
		}
	printf("The sum of all the elements in column %d is %d\n ", i, colsum);
}
