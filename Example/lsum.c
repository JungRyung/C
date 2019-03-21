/********INCLUDE*************/
#include <stdio.h>
#include <stdlib.h>

int inputRow()
{
    int tempRow;
    scanf("%d", &tempRow);

    return tempRow;
}

int inputCol()
{
    int tempCol;
    scanf("%d", &tempCol);

    return tempCol;
}

void changeArray(int row, int col, int originArray[row][col], int newArray[row][col])
{
    int i, j;
    //int newArray[row][col];
    if(row == 1)
    {
    	for(i=0; i<col; i++)
    	{
    		if(i==0)
    		{
    			newArray[0][i] = originArray[]
    		}
    		else if (i == col-1)
    		{
    			
    		}
    		else
    		{

    		}
    	}
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i==0 && j==0) 			// 좌상단 모서리
            {
            	newArray[i][j] = originArray[i][j+1] + originArray[i+1][j] + originArray[i+1][j+1];
            }
            else if(i==0 && j==col-1) 	// 우상단 모서리
            {
            	newArray[i][j] = originArray[i+1][j] + originArray[i][j-1] + originArray[i+1][j-1];
            }
            else if(i==row-1 && j==0)	// 좌하단 모서리
            {
            	newArray[i][j] = originArray[i-1][j] + originArray[i][j+1] + originArray[i-1][j+1];
            }
            else if(i==row-1 && j==col-1)	// 우하단 모서리
            {
            	newArray[i][j] = originArray[i-1][j] + originArray[i][j-1] + originArray[i-1][j-1];
            }
            else if(i==0)		// 상단
            {
            	newArray[i][j] = originArray[i][j-1] + originArray[i+1][j-1] + 
            						originArray[i+1][j] + originArray[i+1][j+1] + originArray[i][j+1];
            }
            else if(j==0)		// 좌측
            {
            	newArray[i][j] = originArray[i-1][j] + originArray[i-1][j+1] + 
            						originArray[i][j+1] + originArray[i+1][j+1] + originArray[i+1][j];
            }
           	else if(j==col-1)	// 우측
           	{
           		newArray[i][j] = originArray[i-1][j] + originArray[i-1][j-1] + 
            						originArray[i][j-1] + originArray[i+1][j-1] + originArray[i+1][j];
           	}
           	else if(i==row-1)	// 하단
           	{
           		newArray[i][j] = originArray[i][j-1] + originArray[i-1][j-1] + 
            						originArray[i-1][j] + originArray[i-1][j+1] + originArray[i][j+1];
           	}
           	else
           	{
           		newArray[i][j] = originArray[i][j-1] + originArray[i-1][j-1] + 
            						originArray[i-1][j] + originArray[i-1][j+1] + originArray[i][j+1] +
            						originArray[i+1][j+1] + originArray[i+1][j] + originArray[i+1][j-1];
           	}
        }
    }
}

void inputElement(int row, int col, int newArray[row][col])
{
    int i, j, tempChar;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &tempChar);
            newArray[i][j] = tempChar;
        }
    }
}

void printArray(int row, int col, int newArray[row][col])
{
    int i, j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(j==col - 1)
            {
                printf("%2d", newArray[i][j]);

            }else{
                printf("%2d ", newArray[i][j]);
            }
        }
        printf("\n");
    }
}
int main()
{
    int row, col;

    row = inputRow();
    col = inputCol();
    //printf("%d %d", row, col);
    int originArray[row][col];
    int addArray[row][col];

    inputElement(row, col, originArray);

    printArray(row, col, originArray);

    changeArray(row, col, originArray, addArray);

    printArray(row, col, addArray);

    return 0;
}