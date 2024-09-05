#include <stdio.h>
#include <conio.h>

main()
{
	char ch,b;

	clrscr();
		printf("Enter Any character:");
		scanf("%c",&b);
			for(ch='a'; ch<=b ; ch++)
			{
				printf("%c\t",ch);
			}




	getch();
}