#include <stdio.h>

main() 
{
    int firstNum = 100; 
    int secondNum = 9;  

    do 
	{
        printf("%d ", firstNum);
        
        printf("%d ", secondNum);
        
        firstNum -= 10;
        secondNum--;
        
    } while (firstNum >= 20 && secondNum >= 1); 

   
    printf("%d %d\n", firstNum, secondNum);
}

