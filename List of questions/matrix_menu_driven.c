#include<stdio.h>
#include<stdlib.h>

void matrix_multiplication()
{
    int row,col;
    printf("Enter rows and columns of a matrix : ");
    scanf("%d",&row);
    scanf("%d",&col);
    int arr1[row][col],arr2[col][row],arr3[row][col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            arr3[i][j]=0;
    printf("Enter the elements of first array:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elements of second array :\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    //multiplying arrays
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            for(int temp=0;temp<col;temp++)
            {
                arr3[i][j]+= arr1[i][temp]*arr2[temp][j];
            }
        }
    }
    printf("Multiplication of both array is :\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}
void transpose()
{
    int row,col;
    printf("Enter rows and columns of a matrix : ");
    scanf("%d",&row);
    scanf("%d",&col);
    int arr[row][col],transpose[col][row];
    printf("Enter the element of an array : \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}
void transpose_diagonal()
{
    int row,col;
    printf("Enter rows and columns of a matrix : ");
    scanf("%d",&row);
    scanf("%d",&col);
    if(row !=col)
    {
        printf("array is not of equal size \n");
    }
    else{
    int arr[row][col];
    printf("Enter the element of an array : \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int low=0,high=row-1;
    int mid;
    if(row%2==0){
        mid = row/2;
    }
    else{
        mid = (row/2)+1;
    }
    for(int i=0;i<row;i++)
    {
            int temp = arr[low][low];
            arr[low][low] = arr[low][high];
            arr[low][high] = temp;
            low++;
            high--;
        
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("Press 1 for Matrix Multilplication ...\n ");
        printf("Press 2 for transpose ... \n ");
        printf("Press 3 for diagonal transpose ... \n ");
        printf("Press 4 for exit ... \n ");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            matrix_multiplication();
            break;
        case 2:
            transpose();
            break;
        case 3:
            transpose_diagonal();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}