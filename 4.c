#include <stdio.h>

int main()
{
    printf("Case 1=For Isosceles triangle\n");
    printf("Case 2=For Equilateral triangle\n");
    printf("Case 3=For Right angled  triangle\n");

    int x, y, z, a, b, c;
    int num;
    printf("Enter Case\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Enter Three sides of a triangle\n");
        scanf("%d %d %d", &x, &y, &z);
        if (x == y || y == z || x == z)
            printf("It is isosceles triangle");
        else
            printf("It is not isosceles triangle");
        break;
    case 2:
        printf("Enter Three sides of a triangle\n");
        scanf("%d %d %d", &x, &y, &z);
        if (x == y && y == z && x == z)
            printf("It is equilateral triangle");
        else
            printf("It is not equilateral triangle");
        break;
    case 3:

        printf("Enter Three sides of a triangle\n");
        scanf("%d %d %d", &x, &y, &z);
        a = x * x;
        b = y * y;
        c = z * z;
        if (a == b + c || b == a + c || c == a + b)
            printf("It is right angled triangle");
        else
            printf("It is not right angled triangle");
        break;

    default:
        printf("Enter valid case");
    }

    return 0;
}