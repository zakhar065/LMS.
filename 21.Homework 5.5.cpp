#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
main()
{
    int mas[100][100];
    int n,m;
 
    printf("n=");
    scanf("%d",&n);
    
    printf("m=");
    scanf("%d",&m);
    
    
    for(int i=0;i<n;i++)
	{
        for(int j=0;j<m;j++)
		{
            scanf("%i",&mas[i][j]);
        }
    }
    
 	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%3d",mas[i][j]);
		}
		printf("\n\n");
	}
 	
    for(int k=0;k<n;k++)
	{
        for(int s=0;s<m;s++)
		{
            for(int i=0;i<n;i++)
			{
                for(int j=0;j<m;j++)
				{
                    if(mas[k][s]<mas[i][j])
					{
                        int q=mas[k][s];
                        mas[k][s]=mas[i][j];
                        mas[i][j]=q;
                    }
                }
            }
        }
    }
 
	printf("\n\n\n");
    for(int i=0;i<n;i++)
	{
        for(int j=0;j<m;j++)
		{
            printf("%3d",mas[j][i]);
        }
        printf("\n\n");
    }
}