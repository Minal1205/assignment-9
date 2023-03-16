#include <stdio.h>
// Program to check whether a year is a leap year or not.
int main()
{
    int year, y;
    printf("Enter Year\n");
    scanf("%d", &year);
    y = year % 400 == 0 || year % 100 == 0 || year % 4 == 0;

    switch (y)
    {

    case 1:
        printf("%d is a leap year", year);
        break;
    case 0:
        printf("%d is not a leap year", year);
    }

    return 0;
}