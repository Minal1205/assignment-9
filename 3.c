#include <stdio.h>
// program which takes the day number of a week and displays a unique greeting message for the day.
int main()
{
    int num;
    printf("Enter Week Number\n");
    scanf("%d", &num);
    switch (num)
    {
    case 0:
        printf("Hey ,Its Sunday,Enjoy");
        break;
    case 1:
        printf("Hey ,Its Monday,Go for your work");
        break;
    case 2:
        printf("Hey ,Its Tuesday,You have a meeting");
        break;
    case 3:
        printf("Hey ,Its Wednesday,such a boring day");
        break;
    case 4:
        printf("Hey ,Its Thursday,you should make your project");
        break;
    case 5:
        printf("Hey ,Its Friday,weekend is coming");
        break;
    case 6:
        printf("Hey ,Its Saturday,weekend");
        break;

    default:
        printf("Enter Valid day!");
        break;
    }
    return 0;
}