#include<stdio.h>
void main()
{
    int n,dig,temp;
    int sum=0;
    printf("Enter a three digit number");
    scanf("%d", &n);
    temp=n;
    if(n>=100 && n<=999)
    {
        while(temp!=0)
        {
        dig=temp%10;
        temp/=10;
        sum+=(dig*dig*dig);
        }
        if (sum==n) printf("%d is an armstrong number\n",n);
        else printf("%d is not an armstrong number\n",n);
    }
    else printf("Invalid input\n");
}