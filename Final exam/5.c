
#include <stdio.h>

int main() 
{
    int n, i;
    float arr[100];

    
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

  
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
	{
        scanf("%f", &arr[i]);
    }

   
    float max = arr[0];


    for (i = 1; i < n; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
    }

 
    printf("The largest element in the array is: %.2f\n", max);

}

