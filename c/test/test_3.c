#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m,n;
    for (int i = 10; i < 168/2+1; i++)
    {
        if (168%i == 0 && i>(168/i) && (i+168/i)%2==0)
        {
            n=(i-168/i)/2;
            // printf("i:%d\n",i);
            m=n*n-100;
            printf("该数可能结果:%d\n",m);
        }
        
    }
    return 0;
}
