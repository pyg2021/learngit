#include<stdio.h>
int main(int argc, char const *argv[])
{
    float m=2,n=1,t;
    double sum=0;

    for (int i = 0; i < 20; i++)
    {
        sum+=m/n;
        t=m;
        m=t+n;
        n=t;
    }
    printf("sum=%f",sum);
    return 0;
}
