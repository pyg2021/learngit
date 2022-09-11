#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=1;
    for (int i = 1; i < 10; i++)
    {
        n+=1;
        n=2*n;
    }
    printf("%d",n);
    return 0;
}
