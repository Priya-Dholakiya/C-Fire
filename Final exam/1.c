#include <stdio.h>

main() 
{
    int N;
    int i;

    
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) 
	{
        int factorial = 1;
        int j = 1;

      
        do 
		{
            factorial *= j; 
            j++; 
        } while (j <= i);

      
        printf("Factorial : %d\n", factorial);
    }


}

