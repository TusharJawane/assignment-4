#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int z=n%2;
    switch(z)
    {
        case 0:
        printf("Number is even\n"); break;
                case 1:
        printf("Number is odd\n"); break;
        default:
        printf("Number is neither even nor odd\n");
    }
}