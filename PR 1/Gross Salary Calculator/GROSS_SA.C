#include <stdio.h>
#include <conio.h>

main()
{
	int base ;
	int hra,da,ta;
	int Ans;

	clrscr();
		printf("Enter Your Base Salary:");
		scanf("%d",&base);
		printf("Enter Your HRA Salary:");
		scanf("%d",&hra);
		printf("Enter Your DA Salary:");
		scanf("%d",&da);
		printf("Enter Your TA Salary:");
		scanf("%d",&ta);

	Ans = base+ (base * hra/100)+(base * da/100)+(base * ta/100) ;

		printf("Your Gross Salary is\t:%d",Ans);

	getch();
}