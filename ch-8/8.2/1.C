#include <stdio.h>
#include <conio.h>

main()
{       int a=1;
	int sum=0;
	int n;

	clrscr();
			printf("Enter any Number\t:");
			scanf("%d",&n);

		while(a<=n)
		{
			sum = sum+a;
			a++;
		}
			printf("Sum\t: %d\n",sum);

	getch();
}