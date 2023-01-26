#include <iostream>

using namespace std;

int main()
{
    
    int n,minimal,maximum,average;
    
    printf("Enter the number of items : "); 
    scanf("%d", &n); 

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        printf( "Enter the element [ %d %s",i+1,"] = "); 
        scanf("%d", &arr[i]); 
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > minimal)
        {
            minimal = arr[i];
        }
		else if (arr[i] < maximum)
        {
            maximum = arr[i];
        }
        average += arr[i];
    }

    printf("\nMinimal =%d\nMaximum =%d\nSum of all elements =%d\nArithmetic mean =%d",
    maximum,minimal,average,average/n);

}