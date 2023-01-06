#include <stdio.h>
/*пароль*/
main() 
{
	int pin1,pin2;
	printf("pin1=");
	scanf("%i",&pin1);
	printf("pin2=");
	scanf("%i",&pin2);
	if(((pin1==111)&&(pin2==222))||((pin1==888)&&(pin2==000)))
	{
		printf("ok");
	}
	else
	{
		printf("error");
	}
}