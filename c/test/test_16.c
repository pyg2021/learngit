#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m,t,r,all;
    n=3;
    m=5;
    if (n<m)
    {
        /* code */
        t=n;
        n=m;
        m=t;
    }
    r=n%m;
    all=n*m;
    while (r!=0)
    {
        n=m;
        m=r;
        r=n%m;
    }
    printf("%d    %d",m,all/m);
    return 0;
}
