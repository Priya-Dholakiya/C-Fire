#include <stdio.h>

main() 
{
    int size,i;
    float sum = 0, average;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size]; 

    printf("Enter array elements:\n");
    for ( i= 0; i < size; i++)
	 {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

    average = sum / size;

    printf("Average of an Array: %.2f\n", average);

}

