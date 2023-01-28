#include <iostream>

using namespace std;

main()
{

    int n,inputNumber,minimal,maximum,average;
    
    printf("Enter the number of items : "); 
    scanf("%d", &n); 
    minimal = n;
    maximum = n;

    for (int i = 0; i < n; i++)
    {
        printf( "Enter the element [ %d %s",i+1,"] = "); 
        scanf("%d", &inputNumber); 
        
        if (inputNumber < maximum);
		maximum = inputNumber;
		if(inputNumber > minimal)minimal = inputNumber;
    
        average += inputNumber; 
    }

    printf("\nMinimum =%d\nMaximum =%d\nSum of all elements =%d\nArithmetic mean =%d",
    maximum,minimal,average,average/n);

    return 0;
}