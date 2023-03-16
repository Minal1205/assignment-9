#include <stdio.h>

int main()
{
    int a, c, b;
    printf("Case 1=For addition\n");
    printf("Case 2=For multiplication\n");
    printf("Case 3=For subtraction\n");
    printf("Case 4=For divison\n");
    printf("Enter your case (Only 1 to 4 cases)\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("Enter two numbers for addition\n");
        scanf("%d %d", &a, &b);
        printf("%d+%d=%d\n", a, b, a + b);
        break;
    case 2:
        printf("Enter two numbers for multiplication\n");
        scanf("%d %d", &a, &b);
        printf("%dx%d=%d\n", a, b, a * b);
        break;
    case 3:
        printf("Enter two numbers for subtraction\n");
        scanf("%d %d", &a, &b);
        printf("%d-%d=%d\n", a, b, a - b);
        break;
    case 4:
        printf("Enter two numbers for division\n");
        scanf("%d %d", &a, &b);
        printf("%d/%d=%d\n", a, b, a / b);
        break;
    case 5:
        return;

    default:
        printf("Enter vald case");
        break;
    }

    return 0;
}