#include <stdio.h>

int main()
{
    int total_selling, profit;
    printf("Enter the total selling prize of the 15 items : \n");
    scanf("%d", &total_selling);
    printf("Enter the profit  you generated : \n");
    scanf("%d", &profit);
    printf("The prize of each item is : %d \n", (total_selling - profit) / 15);

    return 0;
}