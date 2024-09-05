#include <stdio.h>
#include <conio.h>

main()
{       int a,b;
	clrscr();
		printf("Enter First number :");
		scanf("%d",&a);
		printf("Enter Secound Number :");
		scanf("%d",&b);

		printf("//Before Swapping...\n");
		printf("A=%d\nB=%d\n\n",a,b);

		printf("//After Swapping...\n");
		a=a*b;
		b=a/b;
		a=a/b;
		printf("A=%d\nB=%d",a,b);


	getch();
}
