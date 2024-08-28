#include <stdio.h>
#include <conio.h>

main()
{
	int a;
	int b;
	int Ans;

	clrscr();
		 printf("Enter the value of a:");
		 scanf("%d",&a);
		 printf("Enter the value of b:");
		 scanf("%d",&b);
	Ans=a+b;
	Ans=a-b;
	Ans=a*b;
	Ans=a/b;
	Ans=a%b;
		printf("Your Answer is %d+%d=%d \n:",a,b,Ans);
		printf("Your Answer is %d-%d=%d \n:",a,b,Ans);
		printf("Your Answer is %d*%d=%d \n:",a,b,Ans);
		printf("Your Answer is %d/%d=%d \n:",a,b,Ans);
		printf("Your Answer is %d%%d=%d \n :",a,b,Ans);







	getch();
}
