#include<stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            printf("%d*%d=%-4d",j,i,i*j);
        }
        printf("\n");    
    }
    
    return 0;
}
