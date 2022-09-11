#include<stdio.h>
int main()
{
    int n,i;
    printf("请输入整数：");
    n=4;
    printf("%d=",n);
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            printf("%d",i);
            n/=i;
            if(n!=1) printf("*");
        }
    }
    
    printf("\n");
    return 0;
}