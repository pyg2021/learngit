#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,z,t;
    printf("please input:\n");
    scanf("%d%d%d",&x,&y,&z);
    if (x>y)
    {
        t=x;
        x=y;
        y=t;
    }
    if (x>z)
    {
        t=x;
        x=z;
        z=t;
    }
    if (y>z)
    {
        t=y;
        y=z;
        z=t;
    }
    printf("%d  %d  %d\n",x,y,z);
    return 0;
}
