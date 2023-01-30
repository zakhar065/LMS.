#include <stdio.h>

main()
{
	int i=5;
	int sum=0;
	while(i<16)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("sum=%i",sum);
}