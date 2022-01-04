#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
long card_num, temp, temp2;
int m, m1, k;

int sum_n1=0;
int sum_n2=0;
int sum=0;

do
{
card_num = get_long("enter the card num");
}while(card_num<0);

temp = card_num;
temp2 = card_num/10;

while (temp>0)
{
m=temp%10;
sum_n1=sum_n1+m;
temp=temp/100;
}

while (temp2>0)
{
m1=(temp2%10)*2;

if (m1>=10)
{   int temp_m1=0;
    while(m1>0)
    {   
        k=m1%10;
        temp_m1=temp_m1+k;
        m1=m1/10;
    }
    sum_n2=sum_n2+temp_m1;
}
else 
{
    sum_n2=sum_n2+m1;
}

temp2=temp2/100;

}
printf("sum_n1=%i", sum_n1);
printf("\n");
printf("sum_n2=%i", sum_n2);
printf("\n");

int total_sum = sum_n1 + sum_n2;
if (total_sum%10==0)
{
    if ((card_num>=340000000000000 && card_num<350000000000000) || (card_num>=370000000000000 && card_num<380000000000000))
    {
        printf("AMEX");
        printf("\n");
    }
    
    else if (card_num>=5100000000000000 && card_num<5600000000000000)
    {
        printf("MASTERCARD");
        printf("\n");
    }
    
    else if ((card_num>=4000000000000 && card_num<5000000000000) || (card_num>=400000000000000 && card_num<500000000000000) || (card_num>=4000000000000000 && card_num<5000000000000000) )
    {
        printf("VISA");
        printf("\n");
    }
    
    else
    {
        printf("INVALID");
        printf("\n");
    }
}

else

{
    printf("INVALID");
    printf("\n");
}

}