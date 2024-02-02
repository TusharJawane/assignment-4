#include<stdio.h>
void main()
{
    float creditScore,balance;
    int interest;
    printf("Enter credit score\n");
    scanf("%f", &creditScore);
    printf("Enter balance\n");
    scanf("%f", &balance);
    if(creditScore<600) interest=15;
    else if(creditScore<750) interest=12;
    else interest=10;
    float amt=balance*interest;
    printf("Calculated interest= %0.2f\n",amt);
}