#include <stdio.h>

int main()
{
    int i;
    char string1[100], string2[100];
    printf("Enter a string : ");
    scanf("%s", string1);
    printf("You entered %s\n", string1);

    for ( i = 0; string1[i] != '\0'; i++)
    {
        int lower = (int)string1[i];

        if (lower >= 'a' && lower <= 'z')
        {
            string2[i] = string1[i] - 32;
        }
        else
        {
            string2[i] = string1[i];
        }
    }

    string2[i] = '\0';

    printf("The new string is %s", string2);

    return 0;
}