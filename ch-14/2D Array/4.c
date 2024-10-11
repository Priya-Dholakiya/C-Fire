#include <stdio.h>

int main() 
{
    int array[5][5];
    int sum = 0;
    int i,j;

    printf("Enter array's elements:\n");
    for (i = 0; i < 5; i++) 
	{
        for ( j = 0; j < 5; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Boundary elements of the array:\n");

    for ( j = 0; j < 5; j++) 
	{
        printf("%d ", array[0][j]);
        sum += array[0][j];
    }
    printf("\n");

    for (i = 1; i < 4; i++)
	 {
        printf("%d ", array[i][4]);
        sum += array[i][4];
    }
    printf("\n");

    for ( j = 0; j < 5; j++) 
	{
        printf("%d ", array[4][j]);
        sum += array[4][j];
    }
    printf("\n");

    for ( i = 1; i < 4; i++) 
	{
        printf("%d ", array[i][0]);
        sum += array[i][0];
    }
    printf("\n");

    printf("The sum of boundary elements of the array: %d\n", sum);
}

