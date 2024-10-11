#include <stdio.h>

main() 
{
    int rows, cols;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols], b[rows][cols], c[rows][cols];
    int i,j;

    printf("Enter array A's elements:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter array B's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
    }
    printf("Array C is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

