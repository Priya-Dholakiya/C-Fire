#include <stdio.h>
#include <conio.h>

main()
{       int i=1;
	int n;

	clrscr();
			printf("Enter any Number\t:");
			scanf("%d",&n);

		while(i<=n)
		{
			printf("%d * %d=%d\n",n,i,n * i);
			i++;
		}
			printf("Last Value\t: %d\n",i);

	getch();
}
