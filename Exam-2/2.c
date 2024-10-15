#include <stdio.h>

main()
{
	int size;
	printf("ENter the size of Array :");
	scanf("%d",&size);
	
	int a[size],i;
	int sum=0;
	
	for(i=0;i<size;i++)
	{
		printf("Enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]%2!=0)
		{
			 sum+=a[i];
		}
	}
	
	printf("Sum Of All Odd Numbers : %d",sum);
}
