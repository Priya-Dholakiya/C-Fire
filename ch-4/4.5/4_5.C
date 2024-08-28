#include <stdio.h>
#include <conio.h>

main()
{
	int a=5;
	int b=10;
	int c=15;

	clrscr();
		//Before swapping...
		printf("Before swapping : %d\n",a);
		printf("Before swapping : %d\n",b);
		printf("Before swapping : %d\n",c);

		//After swapping...
		a=a*b;
		b=a*c;
		c=b/c;
		b=b/a;
		a=a/c;

		printf("After swapping : %d\n",a);
		printf("After swapping : %d\n",b);
		printf("After swapping : %d\n",c);



	getch();
}