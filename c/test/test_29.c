#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("input");
    scanf("%d",&x);
    int x_10000,x_1000,x_100,x_10,x_1;
    x_10000=x/10000;
    x_1000=x%10000/1000;
    x_100=x%1000/100;
    x_10=x%100/10;
    x_1=x%10;
    printf("output:%d,%d,%d,%d,%d",x_10000,x_1000,x_100,x_10,x_1);
    return 0;
}
