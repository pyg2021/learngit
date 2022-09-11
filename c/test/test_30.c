#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int j=0;
    for (int x = 10000; x <= 99999; x++)
    {
    int x_10000,x_1000,x_100,x_10,x_1;
    x_10000=x/10000;
    x_1000=x%10000/1000;
    x_100=x%1000/100;
    x_10=x%100/10;
    x_1=x%10;
    if (x_10000==x_1&&x_1000==x_10)
    {
        printf("huiwenshu:%d\n",x);
        j++;
    }
    
    }
    printf("geshu:%d\n",j);
    return 0;
}
