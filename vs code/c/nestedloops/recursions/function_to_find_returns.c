

int fun(int n);

#include <stdio.h>

int main()
{
    int n;
    printf("This code is to find the total returns of the function : \n");
    printf("Enter the number for the function to calculate the return count : \n");
    scanf("%d", &n);
    int z = fun(n);
    printf("%d", z);
}

int fun(int n)
{
    if (n == 1)
        return 0;
    else
        return 1 + fun(n / 2);
}