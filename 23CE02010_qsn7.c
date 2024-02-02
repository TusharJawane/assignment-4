#include<stdio.h>
void main()
{
    int age;
    float price;
    printf("Enter age: \n");
    scanf("%d", &age);
    if(age<5) price=0;
    else if(age<=12) price=20;
    else if(age<60) price=50;
    else price=50-(0.2*50);
    printf("Ticket price= %0.2f\n",price);
}