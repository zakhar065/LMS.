#include <stdio.h>

main()
{
	int a=9;
	while(a!=7)
	{
		scanf("%i",&a);
		if(a>7)	
		{
			printf("bolshe\n");
		}
		else
		{	
			if(a<7)
			{
			printf("menshe\n");	
			}
		}
		if(a%2==0)
		{
			printf("divided into two \n");
		}
		else
		{
		printf("not divisible by two\n");
		}
		if(a%3==0)
		{
			printf("divided into  three\n");
		}
		else
		{
		printf("not divisible by three\n");
		}
	}
	printf("super");
}