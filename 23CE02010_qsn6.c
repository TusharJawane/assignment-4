#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    printf("\n1. Addition");
    printf("\n2. Subtraction ");
    printf("\n3. Multiplication ");
    printf("\n4. Division ");
    printf("\nEnter your choice ");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("\nSum of %d and %d is %d",a,b,a+b);
            break;
        case 2:
            printf("\n%d - %d is %d",a,b,a-b);
            break;
        case 3:
            printf("\nProduct of %d and %d is %d",a,b,a*b);
            break;
        case 4:
            printf("\nQuotient of %d and %d is %.2f",a,b,(float)a/b);
            break;
        default:
            printf("\nInvalid input ");
    }
return 0;
}