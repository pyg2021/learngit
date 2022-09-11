#include<stdio.h>
int main(int argc, char const *argv[])
{
    double n=100,m=0;
    for (int i = 1; i < 11; i++)
    {
        m=m+1.5*n;
        n=n/2;
    }
    printf("l=%f,h=%f",m-n,n);
    return 0;
}
