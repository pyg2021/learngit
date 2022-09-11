#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=-1;
    for (int i = 1; i < 8; i++)
{
    
    if (i<5)
    {
        n=n+2;
    }
    if (i>=5)
    {
        n=n-2;
    }
    for (int j = 0; j < 5-(n+1)/2; j++)
    {
        printf(" ");
    }
    
    for (int j = 0; j < n; j++)
    {
        printf("*");
    }
    printf("\n");
    
    
}
    return 0;
}

