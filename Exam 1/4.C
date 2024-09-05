#include <stdio.h>
#include <conio.h>

main()
{
int a,b,c,min;

	clrscr();
		printf("Enter first number:");
		scanf("%d",&a);
		printf("Enter secound number:");
		scanf("%d",&b);
		printf("Enter third number:");
		scanf("%d",&c);

		if(a<b)
		{
			if(a<c)
			{
				min=a;
			}
			else
			{
				min=c;
			}
		}
		else
		{
				if(b<c)
				{
					min=b;
				}
				else
				{
					min=c;
				}
		}
			printf("Minimum number is %d:",min);

		getch();

}