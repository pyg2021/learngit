#include<stdio.h>
int main(int argc, char const *argv[])
{
    for (int n = 101; n < 201; n++)
    {   
        int i;
        for (i = 2; i < n+1; i++)
        {
            if (n%i==0)
            {
                break;
            }
            
        }
        if (i>=n)
        {
            printf("%d\n",n);
        }
        
    }
    
    return 0;
}
