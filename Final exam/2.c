#include <stdio.h>

int main()
 {
    int a, b, c;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max;

    if(a==b || b==c || a==c)
    {
    	printf("All number are same");
	}
    else if (a >= b && a >= c) 
	{
        max = a;
    } 
	else if (b >= a && b >= c) 
	{
        max = b;
    } 
	else 
	{
        max = c;
    }

   
    printf("The maximum number is: %d\n", max);

   
}

