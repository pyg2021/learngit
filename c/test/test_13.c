#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int a;
    for (int i = 100; i < 1000; i++)
    {
        int x,y,z;
        
        x=i%10;
        y=i/10%10;
        z=i/100%10;
        if (i==(x*x*x+y*y*y+z*z*z))
        {
            printf("%d\n",i);
        }
        
    }
    a=10;
    a=(double)a;
    printf("%d\n",a);
    return 0;
}
