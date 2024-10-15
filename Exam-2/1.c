#include <stdio.h>

int sum(int start, int end) 
{
    int sum= 0,i;
    for (i = start; i <= end; i++)
	 {
       sum += i; 
    }
    return sum; 
}

int main() 
{
    int result;

    
    result = sum(1, 10);
    
   
    printf("The sum of numbers from 1 to 10 is: %d\n", result);

    return 0; 
}

