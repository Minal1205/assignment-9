#include <stdio.h>
// a program which takes the month number as an input and display number of days in that month.
int main()
{
    int num;
    printf("Enter Month Number\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Month has 31 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Months has 30 days");

    default:
        printf("Months has 28 or 29 days");
        break;
    }
    return 0;
}