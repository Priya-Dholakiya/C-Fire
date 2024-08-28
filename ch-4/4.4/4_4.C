#include <stdio.h>
#include <conio.h>

main()
{
	int a=100;
	int b=50;

	clrscr();
		//Before swapping...
		printf("Before swapping : %d\n",a);
		printf("Before swapping : %d\n",b);

		//After Swapping...
		a=a*b;
		b=a/b;
		a=a/b;

		printf("After swapping : %d\n",a);
		printf("After swapping : %d\n",b);


	getch();
}