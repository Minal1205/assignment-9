#include <stdio.h>
/*Program to convert a positive number into a negative number and negative number
into a positive number using a switch statement.*/
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d",&num);
    int n=num>0;
    switch (n)
    {
    case 1:
    printf("Negative of number %d is %d\n",num,num*(-1));
        break;
    
    case 0:
    printf("Positive of number %d is %d\n",num,num*(-1));
        break;
    }


    return 0;
}