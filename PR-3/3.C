#include <stdio.h>
#include <conio.h>

main()
{
	 int n,digit,sum=0;

	clrscr();
		printf("Enter Any Number :");
		scanf("%d",&n);

	if(n>=0 && n<=9)
	{
		printf("Your Input Value is Single Digit : %d",n);
	}
	else
	{
		digit=n%10;

			while(n>=10)
			{
				n/=10;
			}
		sum=n+digit;
			printf("%d+%d=%d",n,digit,sum);

	}
		
	getch();
}
