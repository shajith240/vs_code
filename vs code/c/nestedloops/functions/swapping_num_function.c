#include <stdio.h>

int swaped_fun(int *a, int *b);

int main()
{
    int a, b, temp;

    printf("Enter the first number : \n");
    scanf("%d", &a);
    int tempa = a;

    printf("Enter the second number : \n");
    scanf("%d", &b);
    int tempb = b;

    swaped_fun(&a, &b);

    printf("The swaped order of %d and %d is %d and %d", tempa, tempb, a, b);
    return 0;
}

int swaped_fun(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}