#include<stdio.h>
int main()
{
    int qty,tot,rate, dis=0;
    printf("Enter quantity and rate");
    scanf("%d %f",&qty, &rate);
    if (qty>1000)
    {
        dis=10;
        tot=(qty*rate)-(qty*rate*dis/100);
        printf("total expensive=RS%f",tot);
    }
    

    }