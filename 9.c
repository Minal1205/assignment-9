#include <stdio.h>
//Program to Convert even number into its upper nearest odd number Switch Statement.
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    switch (num % 2 == 0)
    {
    case 1:
        num = num + 1;
        printf("Number=%d\n", num);
        break;

    default:
        printf("Number=%d\n", num);
    }
    return 0;
}