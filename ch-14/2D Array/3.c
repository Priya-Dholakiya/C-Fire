#include <stdio.h>

main() 
{
    int size, sum = 0;

    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    int array[size][size];
    int i,j;

    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++) 
	{
        for (j = 0; j < size; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);

            if (i == j) 
			{
                sum += array[i][j];
            }
        }
        printf("\n");
    }

    printf("The sum of diagonal elements of the array: %d\n", sum);
}

