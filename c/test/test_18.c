#include<stdio.h>
int main()
{
    int s=0,a,n,t;
    printf("请输入 a 和 n：\n");
    a=2;
    n=5;
    t=a;
    while(n>0)
    {
        s+=t;
        a=a*10;
        t+=a;
        n--;
    }
    printf("a+aa+...=%d\n",s);
    return 0;
}