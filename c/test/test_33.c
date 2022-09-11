#include<stdio.h>
int main(int argc, char const *argv[])
{
    for (int n = 2; n <= 100; n++)
    {
        for (int i = 2; i <= n; i++)
    {
        if (n%i==0)
        {
            if (i<n)
            {
                printf("%d不是质数\n",n);
                break; 
            }
            else
            {
                printf("%d是质数\n",n);
            }
            
        }
        
    }
    }
    
    
    
    return 0;
}
