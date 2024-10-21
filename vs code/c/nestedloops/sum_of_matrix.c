#include <stdio.h>

int main()
{
    int matrix1[10][10], matrix2[10][10], sum[10][10];
    int R1, C1, R2, C2;
    printf("Enter number of rows of matrix1 : \n");
    scanf("%d", &R1);

    printf("Enter number of columns of matrix1 : \n");
    scanf("%d", &C1);

    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C1; j++)
        {
            printf("Enter element of matrix1 at position [%d][%d] : \n", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter number of rows of matrix2 : \n");
    scanf("%d", &R2);
    if(C1 !=R2){
        printf("The matrix multiplication is not possible");
    }
    else
    printf("Enter number of columns of matrix2 : \n");
    scanf("%d", &C2);

    for (int i = 0; i < R2; i++)
    {
        for (int j = 0; j < C2; j++)
        {
            printf("Enter element of matrix1 at position [%d][%d] : \n", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\n");

    for(int i = 0 ; i < R1; i++){
        for(int j = 0 ; j < C2; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];      
    }
    }
    
    printf("The summation of the two matrices is : \n");
    for(int i = 0 ; i < R1 ; i++){
        for(int j = 0 ; j < C2 ; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}