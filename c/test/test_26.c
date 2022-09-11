#include<stdio.h>
int main(int argc, char const *argv[])
{
    int j;
    int f(int);
    j=5;
    printf("%d!=%d\n",j,f(j));
    return 0;
}
int f(int i)
{
    int sum;
    if (i>0)
    {
        sum=i*f(i-1);
    }
    else
    {
        sum=1;
    }
    
    return sum;
}

