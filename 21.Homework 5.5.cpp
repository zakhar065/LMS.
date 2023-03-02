# include <iostream>
using namespace std;

main()
{ 

	int rows;
	int cols;
	
	printf("Enter the number of rows:  ");
    scanf("%d", &rows);

    printf("Enter the number of columns:  ");
    scanf("%d", &cols);
	
	int **arr=new int* [rows];
	
	printf("Enter the elements of the array:\n");
	
	for (int i=0; i<rows; i++)
	{
		arr[i] = new int[cols];		
	}


	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<cols; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

		printf("\n");
	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<cols; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n\n");
	}


 for (int i = 0; i < rows; i++) 
	{
        for (int j = i; j < cols; j++) 
		{
            int temp = arr[i][j];
 			arr[i][j] = arr[j][i];
 			arr[j][i] = temp;
        }
    }

		printf("\n\n");
    for(int i=0;i<rows;i++)
	{
        for(int j=0;j<cols;j++)
		{
            printf("%3d",arr[i][j]);
        }
        printf("\n\n\n");
    }

	for (int i=0; i<rows; i++)
	{
		delete [] arr[i];	
	}
	
	delete [] arr;
}