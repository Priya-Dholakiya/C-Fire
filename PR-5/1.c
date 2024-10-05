#include <stdio.h>

main()
{
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	int a[size];
	int i;
		printf("\n\n\t----Array Input----\n\n");
	for(i=0;i<size;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]<0)
		{
			printf(" The Nagative Value is :%d,",a[i]);
		}
	}	
	
	
	
}
