#include <iostream>
using namespace std;
 
int main()
{
   int m,d,y;
    printf("day=");
	scanf("%i",&d);
	printf("month=");
	scanf("%i",&m);
	printf("year=");
	scanf("%i",&y);

   m+d;
   
   	if(m==01&&d>=19 || m==02&&d<=22)
   printf("Aquarius\n");
   
   	if(m==2&&d>=19 || m==3&&d<=22)
   printf("Pisces\n");
   
   	if(m==3&&d>=19 || m==4&&d<=22)
   printf("Aries\n");
   
   	if (m==4&&d>=19 || m==5&&d<=22)
   printf("Taurus\n");
   
   	if (m==5&&d>=19 || m==6&&d<=22)
   printf("Gemini\n");
   
   	if (m==6&&d>=19 || m==7&&d<=22)
   printf("Cancer\n");
   
   	if (m==7&&d>=19 || m==8&&d<=22)
   printf("Leo\n");
   
   	if (m==8&&d>=19 || m==9&&d<=22)
   printf("Virgo\n");
   
   	if (m==9&&d>=19 || m==10&&d<=22)
   printf("Libra\n");
   
   	if (m==10&&d>=19 || m==11&&d<=22)
   printf("Scorpio\n");
   
   	if (m==11&&d>=19 || m==12&&d<=22)
   printf("Sagittarius\n");
   
   	if (m==12&&d>=19 || m==1&&d<=22)
   printf("Capricorn\n");
   {
   	 unsigned int year;

	if ( ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0) )
		printf("A leap Year");
	else
		printf("Not a leap year");
    }
}