#include <stdio.h>
#include <conio.h>

main()
{       int a=1;
	int mul=1;
	int n;

	clrscr();
			printf("Enter any Number\t:");
			scanf("%d",&n);

		while(a<=n)
		{
			mul *= a;
			a++;
		}
			printf("mul\t: %d\n",mul);

	getch();
}