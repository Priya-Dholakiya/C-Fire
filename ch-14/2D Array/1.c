#include <stdio.h>

 main() 
 {
    int rows, cols;
    float sum = 0, average;
    int i,j;

    printf("Enter the array's row size:");
    scanf("%d", &rows);
    printf("Enter the array's column size:");
    scanf("%d", &cols);

    int array[rows][cols];

    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
            sum += array[i][j];  
        }
        printf("\n");
    }
	 average = sum / (rows * cols);

    printf("Average of the array: %.2f\n", average);

}

