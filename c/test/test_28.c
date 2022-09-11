#include<stdio.h>
#include <stdio.h>
 
int age(n)
int n;
{
    int c;
    if(n==1) c=10;
    else c=age(n-1)+2;
    return(c);
}
int main()
{
    printf("%d\n",age(5));
}