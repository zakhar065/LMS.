#include <stdio.h>

main()
{
	int mas[100];
	int n;
	printf("el mas");
	scanf("%i",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%i",&mas[i]);
	}
	
	int min,max;
	min=max=mas[0];
	
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		if(mas[i]>max)
		{
			max=mas[i];
		}
		
		if(mas[i]<max)
		{
			min=mas[i];
		}
		
		sum+=mas[i];
	}
	
	float sr=(float)sum/(float)n;
	
	printf("sum=%i sr=%f min=%i max=%i",sum,sr,min,max);
}